/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 16:10:02 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/23 14:06:15 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm("ShrubberyCreationForm", target, 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) : AForm("ShrubberyCreationForm", src.getTarget(), 145, 137)
{
	*this = src;
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs)
{
	if (this != &rhs)
		this->setSigned(rhs.getSigned());
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

void	ShrubberyCreationForm::execute(Bureaucrat const& exec) const
{
	std::string	output(this->getTarget());
	output.append("_shrubbery");
	const char	*str(output.c_str());
	std::ofstream	os(str);

	if (exec.getGrade() <= this->getToExecute() && this->getSigned())
	{
		os << "ASCII trees";
		return ;
	}
	if (exec.getGrade() > this->getToExecute())
		throw AForm::GradeTooLowException();
	if (!this->getSigned())
		throw AForm::CantExecuteForm();
	return ;
}
