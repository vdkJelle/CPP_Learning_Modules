/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 14:29:24 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/27 17:47:09 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	iter(T *array, int len, T (*f)(T))
{
	for (int i(0); i < len; i++)
		array[i] = f(array[i]);
}

template<typename T>
T		addFT(T value)
{
	value += 42;
	return (value);
}

int		main(void)
{
	int intarray[5] = {1, 2, 3, 4, 5};

	iter<int>(intarray, 5, addFT);
	for (int i(0); i < 5; i++)
		std::cout << intarray[i] << std::endl;

	char chararray[] = "/;;;J;:";
	iter<char>(chararray, 7, addFT);
	for (int i(0); i < 7; i++)
		std::cout << chararray[i] << std::endl;
}
