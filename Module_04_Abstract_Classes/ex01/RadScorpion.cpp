/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 14:58:30 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/05 12:55:07 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(RadScorpion const& src) : Enemy(80, "RadScorpion")
{
	*this = src;
	return ;
}

RadScorpion&	RadScorpion::operator=(RadScorpion const& rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
		this->_type = rhs._type;
	}
	return (*this);
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

void		RadScorpion::takeDamage(int num)
{
	if (num <= 0)
		return ;
	this->_hp -= num;
	if (this->_hp < 0)
		this->_hp = 0;
}
