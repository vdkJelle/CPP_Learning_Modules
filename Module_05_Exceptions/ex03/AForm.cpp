/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 20:06:02 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/23 13:54:18 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _toSign(0), _toExecute(0)
{
	return ;
}

AForm::AForm(std::string const name, std::string const target, int const toSign, int const toExecute) : _name(name), _target(target), _signed(false), _toSign(toSign), _toExecute(toExecute)
{
	if (toSign < 1)
		throw AForm::GradeTooHighException();
	else if (toSign > 150)
		throw AForm::GradeTooLowException();
	if (toExecute < 1)
		throw AForm::GradeTooHighException();
	else if (toExecute > 150)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::AForm(AForm const& src) : _name(src._name), _toSign(src._toSign), _toExecute(src._toExecute)
{
	this->_signed = src._signed;
	*this = src;
	return ;
}

AForm&	AForm::operator=(AForm const& rhs)
{
	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

AForm::~AForm(void)
{
	return ;
}

std::string			AForm::getName(void) const
{
	return (this->_name);
}

std::string			AForm::getTarget(void) const
{
	return (this->_target);
}

bool				AForm::getSigned(void) const
{
	return (this->_signed);
}

int					AForm::getToSign(void) const
{
	return (this->_toSign);
}

int					AForm::getToExecute(void) const
{
	return (this->_toExecute);
}

void				AForm::setSigned(bool isSigned)
{
	this->_signed = isSigned;
	return ;
}

void				AForm::beSigned(Bureaucrat& src)
{
	if (src.getGrade() <= this->_toSign)
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

AForm::GradeTooHighException::GradeTooHighException(void)
{
	return ;
}

AForm::GradeTooHighException::GradeTooHighException(GradeTooHighException const& src)
{
	*this = src;
	return ;
}

AForm::GradeTooHighException&	AForm::GradeTooHighException::operator=(GradeTooHighException const& rhs)
{
	(void)rhs;
	return (*this);
}

AForm::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return ;
}

const char	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high.");
}

AForm::GradeTooLowException::GradeTooLowException(void)
{
	return ;
}

AForm::GradeTooLowException::GradeTooLowException(GradeTooLowException const& src)
{
	*this = src;
	return ;
}

AForm::GradeTooLowException&	AForm::GradeTooLowException::operator=(GradeTooLowException const& rhs)
{
	(void)rhs;
	return (*this);
}

AForm::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return ;
}

const char	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low.");
}

AForm::FormAlreadySigned::FormAlreadySigned(void)
{
	return ;
}

AForm::FormAlreadySigned::FormAlreadySigned(FormAlreadySigned const& src)
{
	*this = src;
	return ;
}

AForm::FormAlreadySigned&	AForm::FormAlreadySigned::operator=(FormAlreadySigned const& rhs)
{
	(void)rhs;
	return (*this);
}

AForm::FormAlreadySigned::~FormAlreadySigned(void) throw()
{
	return ;
}

const char	*AForm::FormAlreadySigned::what(void) const throw()
{
	return ("Form was already signed.");
}

AForm::CantExecuteForm::CantExecuteForm(void)
{
	return ;
}

AForm::CantExecuteForm::CantExecuteForm(CantExecuteForm const& src)
{
	*this = src;
	return ;
}

AForm::CantExecuteForm&	AForm::CantExecuteForm::operator=(CantExecuteForm const& rhs)
{
	(void)rhs;
	return (*this);
}

AForm::CantExecuteForm::~CantExecuteForm(void) throw()
{
	return ;
}

const char	*AForm::CantExecuteForm::what(void) const throw()
{
	return ("Couldn't execute form.");
}

std::ostream&	operator<<(std::ostream& o, AForm const& rhs)
{
	o << rhs.getName() << ": form sign status: " << rhs.getSigned() << ", form sign grade: " << rhs.getToSign() << ", form execute grade: " << rhs.getToExecute() << std::endl;
	return (o);
}
