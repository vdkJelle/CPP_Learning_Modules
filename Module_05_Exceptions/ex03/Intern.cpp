/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 14:21:36 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/23 15:57:05 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const& src)
{
	*this = src;
	return ;
}

Intern&	Intern::operator=(Intern const& rhs)
{
	(void)rhs;
	return (*this);
}

Intern::~Intern(void)
{
	return ;
}

AForm	*Intern::makeForm(std::string form, std::string target)
{
	std::string const	formNames[3] = {
			"presidential pardon",
			"robotomy request",
			"shrubbery creation"
	};
	AForm	*array[3] = {
		Intern::makePpf(target),
		Intern::makeRrf(target),
		Intern::makeScf(target)
	};
	for (int i(0); i < 3; i++)
	{
		if (form == formNames[i])
			return array[i];
	}
	throw Intern::InvalidForm();
	return (NULL);
}

AForm	*Intern::makePpf(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeRrf(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::makeScf(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Intern::InvalidForm::InvalidForm(void)
{
	return ;
}

Intern::InvalidForm::InvalidForm(InvalidForm const& src)
{
	*this = src;
	return ;
}

Intern::InvalidForm&	Intern::InvalidForm::operator=(InvalidForm const& rhs)
{
	(void)rhs;
	return (*this);
}

Intern::InvalidForm::~InvalidForm(void) throw()
{
	return ;
}

const char	*Intern::InvalidForm::what(void) const throw()
{
	return ("Invalid form name.");
}
