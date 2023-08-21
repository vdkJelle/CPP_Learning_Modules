/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/11 13:55:17 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/23 14:09:46 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int		main(void)
{
	srand (time(NULL));
	std::cout << "***********************************************************************" << std::endl;
	try
	{
		PresidentialPardonForm	form("Tesa");
		std::cout << form;
		Bureaucrat griffin("Griffin", 3);
		std::cout << griffin;

		griffin.signForm(form);
		std::cout << form;
		griffin.executeForm(form);
		std::cout << form;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "***********************************************************************" << std::endl;
	try
	{
		RobotomyRequestForm	form("Jelle");
		std::cout << form;
		Bureaucrat thijs("Thijs", 73);
		std::cout << thijs;
		Bureaucrat jonas("Jonas", 45);
		std::cout << jonas;

		thijs.signForm(form);
		std::cout << form;
		thijs.executeForm(form);
		std::cout << form;
		jonas.signForm(form);
		std::cout << form;
		jonas.executeForm(form);
		std::cout << form;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "***********************************************************************" << std::endl;
	try
	{
		ShrubberyCreationForm	form("here");
		std::cout << form;
		Bureaucrat thijs("Thijs", 149);
		std::cout << thijs;
		Bureaucrat tesa("Tesa", 137);

		tesa.signForm(form);
		std::cout << form;
		tesa.executeForm(form);
		std::cout << form;
		thijs.signForm(form);
		std::cout << form;
		thijs.executeForm(form);
		std::cout << form;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "***********************************************************************" << std::endl;
	return (0);
}
