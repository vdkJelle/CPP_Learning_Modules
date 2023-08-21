/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperSledge.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 17:21:31 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 17:29:08 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperSledge.hpp"

SuperSledge::SuperSledge(void) : AWeapon("Super Sledge", 7, 38)
{
	return ;
}

SuperSledge::SuperSledge(SuperSledge const& src) : AWeapon("Super Sledge", 7, 38)
{
	*this = src;
	return ;
}

SuperSledge&	SuperSledge::operator=(SuperSledge const& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_apcost = rhs._apcost;
		this->_damage = rhs._damage;
	}
	return (*this);
}

SuperSledge::~SuperSledge(void)
{
	return ;
}

void	SuperSledge::attack(void) const
{
	std::cout << "* thump *" << std::endl;
	return ;
}
