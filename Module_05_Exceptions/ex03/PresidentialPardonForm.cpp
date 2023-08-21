/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 16:10:00 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/23 13:55:03 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : AForm("PresidentialPardonForm", target, 25, 5)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) : AForm("PresidentialPardonForm", src.getTarget(), 25, 5)
{
	*this = src;
	return ;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs)
{
	if (this != &rhs)
		this->setSigned(rhs.getSigned());
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

void	PresidentialPardonForm::execute(Bureaucrat const& exec) const
{
	if (exec.getGrade() <= this->getToExecute() && this->getSigned())
	{
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
		return ;
	}
	if (exec.getGrade() > this->getToExecute())
		throw AForm::GradeTooLowException();
	if (!this->getSigned())
		throw AForm::CantExecuteForm();
	return ;
}
