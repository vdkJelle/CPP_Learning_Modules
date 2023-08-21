/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/11 13:55:17 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/23 16:48:02 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int		main(void)
{
	srand (time(NULL));
	std::cout << "***********************************************************************" << std::endl;
	try
	{
		Intern	angi;
		AForm	*rrf;

		rrf = angi.makeForm("robotomy request", "Tesa");
		std::cout << *rrf;
		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "***********************************************************************" << std::endl;
	try
	{
		Intern	angi;
		AForm	*rrf;
		Bureaucrat	boris("Boris", 3);

		rrf = angi.makeForm("presidential pardon", "Tesa");
		std::cout << *rrf;
		boris.signForm(*rrf);
		boris.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "***********************************************************************" << std::endl;
	try
	{
		Intern	angi;
		AForm	*rrf;

		rrf = angi.makeForm("shrubbery creation", "Tesa");
		std::cout << *rrf;
		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "***********************************************************************" << std::endl;
	try
	{
		Intern	angi;
		AForm	*ppf;

		ppf = angi.makeForm("lolz", "Tesa");
		std::cout << ppf;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "***********************************************************************" << std::endl;
	return (0);
}
