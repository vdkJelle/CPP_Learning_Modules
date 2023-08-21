/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 14:58:19 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/31 15:57:31 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	return ;
}

AWeapon::AWeapon(std::string const& name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
	return ;
}

AWeapon::AWeapon(AWeapon const& src)
{
	*this = src;
	return ;
}

AWeapon&	AWeapon::operator=(AWeapon const& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_apcost = rhs._apcost;
		this->_damage = rhs._damage;
	}
	return (*this);
}

AWeapon::~AWeapon(void)
{
	return ;
}

std::string	AWeapon::getName(void) const
{
	return (this->_name);
}

int			AWeapon::getAPCost(void) const
{
	return (this->_apcost);
}

int			AWeapon::getDamage(void) const
{
	return (this->_damage);
}
