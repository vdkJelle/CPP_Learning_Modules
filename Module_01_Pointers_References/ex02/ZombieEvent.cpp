/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 12:20:33 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/29 12:14:30 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	return ;
}

void		ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
	return ;
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie*	newZombie = new Zombie(name, this->_type);
	return (newZombie);
}

std::string	ZombieEvent::nameRandomizer(void)
{
	int i = rand() % 15;
	switch (i)
	{
		case 1 :
			return ("Tess");
		case 2 :
			return ("Angi");
		case 3 :
			return ("Michelle");
		case 4 :
			return ("Zeno");
		case 5 :
			return ("Lindsay");
		case 6 :
			return ("Turlough");
		case 7 :
			return ("Wout");
		case 8 :
			return ("Amber");
		case 9 :
			return ("Sanne");
		case 10 :
			return ("Anna");
		case 11 :
			return ("Jacinta");
		case 12 :
			return ("Griffin");
		case 13 :
			return ("Nina");
		case 14 :
			return ("Swaan");
		default :
			return ("Idris");
	}
}

std::string	ZombieEvent::typeRandomizer(void)
{
	int i = rand() % 12;
	switch (i)
	{
		case 1 :
			return ("Infected Decrepit");
		case 2 :
			return ("Infected Aged");
		case 3 :
			return ("Infected Young");
		case 4 :
			return ("Infected Fresh");
		case 5 :
			return ("Infected Colonist");
		case 6 :
			return ("Infected Executive");
		case 7 :
			return ("Infected Chubby");
		case 8 :
			return ("Infected Harpy");
		case 9 :
			return ("Infected Venom");
		case 10 :
			return ("Infected Behemoth");
		case 11 :
			return ("Infected Giant");
		default :
			return ("Infected Idris");
	}
}
