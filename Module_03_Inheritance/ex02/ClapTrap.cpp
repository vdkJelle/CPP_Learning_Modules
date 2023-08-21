/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 10:17:37 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 14:40:15 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Constructing new ClapTrap, hold on!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(int hitPoints, int maxHitPoints, int energyPoints, int maxEnergyPoints, int level, std::string name, int meleeDamage, int rangedDamage, int armor)
{
	std::cout << "Constructing new ClapTrap, hold on!" << std::endl;
	this->_hitPoints = hitPoints;
	this->_maxHitPoints = maxHitPoints;
	this->_energyPoints = energyPoints;
	this->_maxEnergyPoints = maxEnergyPoints;
	this->_level = level;
	this->_name = name;
	this->_meleeDamage = meleeDamage;
	this->_rangedDamage = rangedDamage;
	this->_armor = armor;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
	*this = src;
	return ;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& rhs)
{
	if (this != &rhs)
	{
		this->_hitPoints = rhs._hitPoints;
		this->_maxHitPoints = rhs._maxHitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_maxEnergyPoints = rhs._maxEnergyPoints;
		this->_level = rhs._level;
		this->_name = rhs._name;
		this->_meleeDamage = rhs._meleeDamage;
		this->_rangedDamage = rhs._rangedDamage;
		this->_armor = rhs._armor;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destroying your poor ClapTrap, what'd he ever do to you!?" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_armor >= (int)amount)
	{
		std::cout << "That didn't even scratch <" << this->_name << ">. Nothing happened." << std::endl;
		return ;
	}
	std::cout << "Oof! <" << this->_name << "> took a big hit. <" << this->_name << "> will surely feel that!" << std::endl;
	this->_hitPoints -= (amount - this->_armor);
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "<" << this->_name << ">: You can't keep a good 'bot down!" << std::endl;
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	return ;
}
