/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 10:10:59 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/28 12:30:52 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void)
{
	std::vector<int> 			container;

	container.push_back(0);
	container.push_back(3);
	container.push_back(5);
	container.push_back(8);
	container.push_back(24);

	std::cout << "Looking for the number 24 in the container: ";
	if (easyFind(container, 24))
		return (1);
	std::cout << "Looking for the number 4 in the container: ";
	if (easyFind(container, 4))
		return (1);
	std::cout << "Look, it's returned before here :D" << std::endl;
	return (0);
}
