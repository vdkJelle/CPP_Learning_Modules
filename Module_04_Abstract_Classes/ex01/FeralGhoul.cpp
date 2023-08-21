/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FeralGhoul.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 17:30:27 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 17:38:59 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FeralGhoul.hpp"

FeralGhoul::FeralGhoul(void) : Enemy(120, "Feral Ghoul")
{
	std::cout << "Hey! Who you callin' a zombie?" << std::endl;
	return ;
}

FeralGhoul::FeralGhoul(FeralGhoul const& src) : Enemy(120, "Feral Ghoul")
{
	*this = src;
	return ;
}

FeralGhoul&	FeralGhoul::operator=(FeralGhoul const& rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
		this->_type = rhs._type;
	}
	return (*this);
}

FeralGhoul::~FeralGhoul(void)
{
	std::cout << "Noooooooo...." << std::endl;
	return ;
}

void		FeralGhoul::takeDamage(int num)
{
	if (num <= 0)
		return ;
	this->_hp -= num;
	if (this->_hp < 0)
		this->_hp = 0;
}
