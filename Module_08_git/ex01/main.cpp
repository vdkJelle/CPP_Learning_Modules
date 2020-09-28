/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 12:31:29 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/28 17:55:44 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main(void)
{
	Span span(15000);
	std::vector<int> numvec;
	srand(time(NULL));

	for (int i(0); i < 14998; i++)
		numvec.push_back(rand());
	try 
	{
		span.addNumber(numvec.begin(), numvec.end());;
		span.addNumber(INT_MAX);
		span.addNumber(INT_MIN);
		span.addNumber(12351);
	}
	catch (std::exception &e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}
	try
	{
		long shortestSpan;
		long longestSpan;

		shortestSpan = span.shortestSpan();
		longestSpan = span.longestSpan();
		std::cout << "shortest span: " << shortestSpan << std::endl;
		std::cout << "longest span: " << longestSpan << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}
	return (0);
}
