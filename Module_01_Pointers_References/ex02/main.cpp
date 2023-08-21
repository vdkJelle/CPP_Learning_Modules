/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 12:20:29 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/07/31 14:36:53 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	randomChump(void)
{
	ZombieEvent	event;
	Zombie*		zombie;
	std::string	name;
	std::string type;

	name = event.nameRandomizer();
	type = event.typeRandomizer();
	event.setZombieType(type);
	zombie = event.newZombie(name);
	zombie->announce();
	delete zombie;
}

int		main(void)
{
	srand (time(NULL));
	for (int i(0); i < 20; i++)
		randomChump();
	return (0);
}
