/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 17:56:54 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/27 20:27:35 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(void)
{
	Array<int>		intArray(4);
	Array<float>	floatArray(4);
	Array<double>	doubleArray(4);
	Array<char>		charArray(4);
	Array<int>		emptyArray;

	std::cout << "int array size: " << intArray.size() << std::endl;
	std::cout << "empty array size: " << emptyArray.size() << std::endl << std::endl;
	
	std::cout << "int array:" << std::endl;
	for (int i(0); i < 4; i++)
		intArray[i] = i;
	for (int i(0); i < 4; i++)
		std::cout << intArray[i] << std::endl;

	std::cout << "float array:" << std::endl;
	for (int i(0); i < 4; i++)
		floatArray[i] = i + 0.5;
	for (int i(0); i < 4; i++)
		std::cout << floatArray[i] << std::endl;

	std::cout << "double array:" << std::endl;
	for (int i(0); i < 4; i++)
		doubleArray[i] = i + 0.5;
	for (int i(0); i < 4; i++)
		std::cout << doubleArray[i] << std::endl;

	std::cout << "char array:" << std::endl;
	for (int i(0); i < 4; i++)
		charArray[i] = i + 'a';
	for (int i(0); i < 4; i++)
		std::cout << charArray[i] << std::endl;

	try 
	{
		Array<int>	intArray(4);
		
		intArray[40] = 4;
	}
	catch (std::out_of_range& e)
	{
		std::cout << e.what();
	}
	return (0);
}
