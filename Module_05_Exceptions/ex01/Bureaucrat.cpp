/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/11 13:55:18 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/21 21:55:01 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;	
}

Bureaucrat::Bureaucrat(Bureaucrat const& src)
{
	*this = src;
	return ;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

std::string 	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int				Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void			Bureaucrat::increaseGrade(void)
{
	if (this->_grade > 1 && this->_grade <= 150)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
	return ;
}

void			Bureaucrat::decreaseGrade(void)
{
	if (this->_grade >= 1 && this->_grade < 150)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
	return ;
}

void			Bureaucrat::signForm(Form& form)
{
	if (form.getSigned())
	{
		std::cout << "Form couldn't be signed because it has already been signed." << std::endl;
		return ;
	}
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " has singed " << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &)
	{
		std::cout << "Couldn't sign form because grade is too low." << std::endl;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const& src)
{
	*this = src;
	return ;
}

Bureaucrat::GradeTooHighException&	Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const& rhs)
{
	(void)rhs;
	return (*this);
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return ;
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high.");
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const& src)
{
	*this = src;
	return ;
}

Bureaucrat::GradeTooLowException&	Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const& rhs)
{
	(void)rhs;
	return (*this);
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return ;
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low.");
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& rhs)
{
	o << rhs.getName() << ", bureaucrat grade: " << rhs.getGrade();
	return (o);
}
