/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/11 13:55:17 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/21 21:54:19 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int		main(void)
{
	try
	{
		Form	form("Mrbrplz", 0, 3);
		std::cout << form;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form	form2("zzz", 151, 4);
		std::cout << form2;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form	form3("Zzzz", 3, 0);
		std::cout << form3;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form	form4("Mrbrplz", 3, 151);
		std::cout << form4;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "***********************************************************************" << std::endl;
	try
	{
		Form	form5("Space Pirate Resignation", 50, 25);
		std::cout << form5;
		Bureaucrat victor("Victor", 77);
		std::cout << victor << std::endl;

		victor.signForm(form5);
		std::cout << form5;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "***********************************************************************" << std::endl;
	try
	{
		Form	form5("Dominos resignation sheet", 50, 25);
		std::cout << form5;
		Bureaucrat thijs("Thijs", 35);
		std::cout << thijs << std::endl;

		thijs.signForm(form5);
		std::cout << form5;
		thijs.signForm(form5);
		std::cout << form5;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "***********************************************************************" << std::endl;
	return (0);
}
