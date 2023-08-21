/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 12:20:30 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/07/31 14:12:56 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

void	Zombie::announce(void) const
{
	std::string response = this->responseRandomizer();
	
	std::cout << "<" << this->_name << " (" << this->_type << ")> " << response << std::endl;
	return ;
}

std::string	Zombie::responseRandomizer(void) const
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
