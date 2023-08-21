/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/29 16:28:22 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 16:14:33 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Peasant.hpp"

int		main(void)
{
	Sorcerer	robert("Robert", "the Magnificent");

	Victim	jim("Jimmy");
	Peon	joe("Joe");
	Peasant	fred("Fred");

	std::cout << robert << jim << joe << fred;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(fred);

	return 0;
}
