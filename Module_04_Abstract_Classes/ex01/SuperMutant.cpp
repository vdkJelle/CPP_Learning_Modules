/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 14:58:30 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/05 12:55:15 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const& src) : Enemy(170, "Super Mutant")
{
	*this = src;
	return ;
}

SuperMutant&	SuperMutant::operator=(SuperMutant const& rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
		this->_type = rhs._type;
	}
	return (*this);
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

void		SuperMutant::takeDamage(int num)
{
	if (num - 3 <= 0)
		return ;
	this->_hp -= num - 3;
	if (this->_hp < 0)
		this->_hp = 0;
}
