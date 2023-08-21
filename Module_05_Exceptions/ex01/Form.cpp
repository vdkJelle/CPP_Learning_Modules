/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 14:27:33 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/21 19:43:50 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _toSign(0), _toExecute(0)
{
	return ;
}

Form::Form(std::string const name, int const toSign, int const toExecute) : _name(name), _signed(false), _toSign(toSign), _toExecute(toExecute)
{
	if (toSign < 1)
		throw Form::GradeTooHighException();
	else if (toSign > 150)
		throw Form::GradeTooLowException();
	if (toExecute < 1)
		throw Form::GradeTooHighException();
	else if (toExecute > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const& src) : _name(src._name), _toSign(src._toSign), _toExecute(src._toExecute)
{
	this->_signed = src._signed;
	*this = src;
	return ;
}

Form&	Form::operator=(Form const& rhs)
{
	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

Form::~Form(void)
{
	return ;
}

std::string			Form::getName(void) const
{
	return (this->_name);
}

bool				Form::getSigned(void) const
{
	return (this->_signed);
}

int					Form::getToSign(void) const
{
	return (this->_toSign);
}

int					Form::getToExecute(void) const
{
	return (this->_toExecute);
}

void				Form::beSigned(Bureaucrat& src)
{
	if (src.getGrade() <= this->_toSign)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

Form::GradeTooHighException::GradeTooHighException(void)
{
	return ;
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const& src)
{
	*this = src;
	return ;
}

Form::GradeTooHighException&	Form::GradeTooHighException::operator=(GradeTooHighException const& rhs)
{
	(void)rhs;
	return (*this);
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return ;
}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high.");
}

Form::GradeTooLowException::GradeTooLowException(void)
{
	return ;
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const& src)
{
	*this = src;
	return ;
}

Form::GradeTooLowException&	Form::GradeTooLowException::operator=(GradeTooLowException const& rhs)
{
	(void)rhs;
	return (*this);
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return ;
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low.");
}

std::ostream&	operator<<(std::ostream& o, Form const& rhs)
{
	o << rhs.getName() << ": form sign status: " << rhs.getSigned() << ", form sign grade: " << rhs.getToSign() << ", form execute grade: " << rhs.getToExecute() << std::endl;
	return (o);
}
