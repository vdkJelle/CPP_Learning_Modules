/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 14:40:48 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/18 10:46:48 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _N(N)
{
	this->_zombie = new Zombie[N];
	announce();
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_zombie;
}

void	ZombieHorde::announce(void) const
{
	std::string response;
	
	for (int i(0); i < this->_N; i++)
	{
		response = this->responseRandomizer();
		std::cout << "<" << this->_zombie[i].getInfo(0) << " (" << this->_zombie[i].getInfo(1) << ")> " << response << std::endl;
	}
	return ;
}

std::string	ZombieHorde::responseRandomizer(void) const
{
	int i = rand() % 5;
	switch (i)
	{
		case 1 :
			return ("Braiiiiiiinnnssss...");
		case 2 :
			return ("HI BRAIN, THIS IS ZOMBIE.");
		case 3 :
			return ("I want you for your brains, not your body.");
		case 4 :
			return ("Zombies eat brains, you're safe.");
		default :
			return ("Wait, I'm not a zombie, what am I doing here?!");
	}
}
