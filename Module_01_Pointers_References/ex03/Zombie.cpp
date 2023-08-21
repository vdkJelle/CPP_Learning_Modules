/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 14:40:22 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/07/31 17:10:07 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->_name = this->nameRandomizer();
	this->_type = this->typeRandomizer();
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

std::string	Zombie::getInfo(int i) const
{
	if (i == 0)
		return (this->_name);
	else
		return (this->_type);
}

std::string	Zombie::nameRandomizer(void) const
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

std::string	Zombie::typeRandomizer(void) const
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
