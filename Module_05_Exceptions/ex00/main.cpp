/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/11 13:55:17 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/21 17:06:48 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int		main(void)
{
	try
	{
		Bureaucrat thijs("Thijs", 1);

		std::cout << thijs << std::endl;
		thijs.decreaseGrade();
		std::cout << thijs << std::endl;
		thijs.increaseGrade();
		std::cout << thijs << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Tessa("Tesa", 151);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat thijs("Thijs", 1);

		thijs.increaseGrade();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
