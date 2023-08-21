/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 15:01:14 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/29 15:21:44 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	return ;
}

ScavTrap::ScavTrap(std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1), _name(name), _meleeDamage(20), _rangedDamage(15), _armor(3)
{
	int	i = rand() % 5;
	
	switch (i)
	{
		default :
		{
			std::cout << "SC4V-TP <" << name << "(" << this->_level << ")>: *Skitter* *Skitter* Anyone seen any of that good stuff? " << " Energy:" << this->_energyPoints << "/" << this->_maxEnergyPoints << "." << std::endl;
			break ;
		}
		case 1 :
		{
			std::cout << "SC4V-TP <" << name << "(" << this->_level << ")>: A piece of scrap a day keeps all the meanies away." << " Energy:" << this->_energyPoints << "/" << this->_maxEnergyPoints << "." << std::endl;
			break ;
		}
		case 2 :
		{
			std::cout << "SC4V-TP <" << name << "(" << this->_level << ")>: *Twitches* Did I hear an intruder!?" << " Energy:" << this->_energyPoints << "/" << this->_maxEnergyPoints << "." << std::endl;
			break ;
		}
		case 3 :
		{
			std::cout << "SC4V-TP <" << name << "(" << this->_level << ")>: A piece of scrap here, a piece of scrap there.. WAIT WHO ARE YOU!?" << " Energy:" << this->_energyPoints << "/" << this->_maxEnergyPoints << "." << std::endl;
			break ;
		}
		case 4 :
		{
			std::cout << "SC4V-TP <" << name << "(" << this->_level << ")>: Welcome to our home. It might be scrappy but it's ours." << " Energy:" << this->_energyPoints << "/" << this->_maxEnergyPoints << "." << std::endl;
			break ;
		}
	}
	return ;
}

ScavTrap::ScavTrap(ScavTrap const& src)
{
	*this = src;
	return ;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& rhs)
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

ScavTrap::~ScavTrap(void)
{
	int	i = rand() % 5;
	
	switch (i)
	{
		default :
		{
			std::cout << "SC4V-TP <" << this->_name << ">: Oh no, they got in. Runnnnnn!!!" << std::endl;
			break ;
		}
		case 1 :
		{
			std::cout << "SC4V-TP <" << this->_name << ">: My defenses... penetrated." << std::endl;
			break ;
		}
		case 2 :
		{
			std::cout << "SC4V-TP <" << this->_name << ">: Is this what fading away feels like? Bleep bloop." << std::endl;
			break ;
		}
		case 3 :
		{
			std::cout << "SC4V-TP <" << this->_name << ">: I hope they find a way to reconnect me...." << std::endl;
			break ;
		}
		case 4 :
		{
			std::cout << "SC4V-TP <" << this->_name << ">: If only they made us cross-compatible...." << std::endl;
			break ;
		}
	}
}

void	ScavTrap::rangedAttack(std::string const& target)
{
	std::cout << "SC4V-TP <" << this->_name << "> shoots " << target << " with small pieces of metal scrap, hurting " << target << " for " << this->_rangedDamage << " damage." << std::endl;
}

void	ScavTrap::meleeAttack(std::string const& target)
{
	std::cout << "SC4V-TP <" << this->_name << "> smacks " << target << " with an old rusty pipe, hurting " << target << " for " << this->_meleeDamage << " damage." << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_armor >= (int)amount)
	{
		std::cout << "SC4V-TP <" << this->_name << "> armor prevents all of the hurt. Nothing happened." << std::endl;
		return ;
	}
	std::cout << "Oof! SC4V-TP <" << this->_name << "> took a big beating. SC4V-TP <" << this->_name << "> Feels like it itself is being turned to scrap!" << std::endl;
	this->_hitPoints -= (amount - this->_armor);
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	return ;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "SC4V-TP <" << this->_name << ">: Let's see where we can fit these spare parts." << std::endl;
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	return ;
}

void	ScavTrap::challengeNewcomer(void)
{
	int i = rand() % 10;

	switch (i)
	{
		default :
			{
				std::cout << "SC4V-TP <" << this->_name << ">: Here's a challenge for you: If there are four sheep, two dogs and one herds-men, how many feet are there?" << std::endl;
				break ;
			}
		case 1 :
			{
				std::cout << "SC4V-TP <" << this->_name << ">: Here's a challenge for you: You answer me, although I never ask you questions." << std::endl;
				break ;
			}
		case 2 :
			{
				std::cout << "SC4V-TP <" << this->_name << ">: Here's a challenge for you: What word is always pronounced wrong?" << std::endl;
				break ;
			}
		case 3 :
			{
				std::cout << "SC4V-TP <" << this->_name << ">: Here's a challenge for you: Which three letters can frighten a thief away?" << std::endl;
				break ;
			}
		case 4 :
			{
				std::cout << "SC4V-TP <" << this->_name << ">: Here's a challenge for you: The more you take, the more you leave behind. What am I?" << std::endl;
				break ;
			}
		case 5 :
			{
				std::cout << "SC4V-TP <" << this->_name << ">: Here's a challenge for you: What is the beginning of eternity, the end of time and space, the beginning of every end and the end of every race?" << std::endl;
				break ;
			}
		case 6 :
			{
				std::cout << "SC4V-TP <" << this->_name << ">: Here's a challenge for you: What belongs to you, but is used by others?" << std::endl;
				break ;
			}
		case 7 :
			{
				std::cout << "SC4V-TP <" << this->_name << ">: Here's a challenge for you: Tear one off and scratch my head, what once was red is black instead." << std::endl;
				break ;
			}
		case 8 :
			{
				std::cout << "SC4V-TP <" << this->_name << ">: Here's a challenge for you: Forwards I am heavy; backwards I am not." << std::endl;
				break ;
			}
		case 9 :
			{
				std::cout << "SC4V-TP <" << this->_name << ">: Here's a challenge for you: I can be broken without being held. Some people use me to deceive, but when delivered, I am the greatest gift of all." << std::endl;
				break ;
			}	
	}
	return ;
}
