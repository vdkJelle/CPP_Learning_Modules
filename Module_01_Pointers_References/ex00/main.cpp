/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 12:16:16 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/07/30 11:54:11 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static void ponyOnTheStack(void)
{
	Pony	stackPony = Pony("is one stacked pony", " he likes to boss people around.");
}

static void	ponyOnTheHeap(void)
{
	Pony*	heapPony = new Pony("is one heap of a pony", " although it doesn't look like much.");

	delete heapPony;
}

int			main(void)
{
	std::string input;

	std::cout << "Here we create the heapPony." << std::endl;
	ponyOnTheHeap();
	std::cout << "The heapPony is now gone." << std::endl;
	std::cout << "The stackPony is now created." << std::endl;
	ponyOnTheStack();
	std::cout << "The stackPony is now gone." << std::endl << std::endl;
	std::cout << "Please now run a leaks test to check if everything is deallocated and write exit after." << std::endl;
	while (true)
	{
		std::getline(std::cin, input);
		if (input == "exit")
			return (0);
	}
	return (0);
}
