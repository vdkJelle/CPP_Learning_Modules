/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 15:53:04 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/29 14:03:45 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setWeapon(Weapon &weaponType)
{
	this->_weaponType = &weaponType;
	return ;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weaponType->getType() << std::endl;
	return ;
}
