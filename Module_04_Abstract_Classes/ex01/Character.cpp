/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 14:58:28 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/05 12:57:56 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	return ;
}

Character::Character(std::string const& name) : _name(name), _ap(40), _weap(NULL)
{
	return ;
}

Character::Character(Character const& src)
{
	*this = src;
	return ;
}

Character&	Character::operator=(Character const& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_ap = rhs._ap;
	}
	return (*this);
}

Character::~Character(void)
{
	return ;
}

void	Character::recoverAP(void)
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
	return ;
}

void	Character::equip(AWeapon* weap)
{
	this->_weap = weap;
	return ;
}

void	Character::attack(Enemy* myMind)
{
	if (!this->_weap || this->_ap < this->_weap->getAPCost())
		return ;
	std::cout << this->_name << " attacks " << myMind->getType() << " with a " << this->_weap->getName() << std::endl;
	this->_weap->attack();
	myMind->takeDamage(this->_weap->getDamage());
	this->_ap -= this->_weap->getAPCost();
}

std::string	const	Character::getName(void) const
{
	return (this->_name);
}

int					Character::getAP(void) const
{
	return (this->_ap);
}

AWeapon*			Character::getWeap(void) const
{
	return (this->_weap);
}

std::ostream&	operator<<(std::ostream &o, Character const& rhs)
{
	if (!rhs.getWeap())
		o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
	else
		o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeap()->getName() << std::endl; 
	return (o);
}
