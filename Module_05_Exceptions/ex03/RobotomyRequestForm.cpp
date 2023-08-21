/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 16:10:01 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/23 13:57:09 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : AForm("RobotomyRequestForm", target, 72, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) : AForm("RobotomyRequestForm", src.getTarget(), 72, 45)
{
	*this = src;
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs)
{
	if (this != &rhs)
		this->setSigned(rhs.getSigned());
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

void	RobotomyRequestForm::execute(Bureaucrat const& exec) const
{
	int	i(rand() % 2);
	
	if (exec.getGrade() <= this->getToExecute() && this->getSigned())
	{
		std::cout << "* Brrr brrrr brrrr *" << std::endl;
		if (i == 0)
			std::cout << this->getTarget() << " has been robotomized succesfully." << std::endl;
		else
			std::cout << "Robotomization failed." << std::endl;
		return ;
	}
	if (exec.getGrade() > this->getToExecute())
		throw AForm::GradeTooLowException();
	if (!this->getSigned())
		throw AForm::CantExecuteForm();
	return ;
}
