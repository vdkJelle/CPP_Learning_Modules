/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 13:25:44 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 14:27:18 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	return ;
}

FragTrap::FragTrap(std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name(name), _meleeDamage(30), _rangedDamage(20), _armor(5)
{
	int	i = rand() % 5;
	
	switch (i)
	{
		default :
		{
			std::cout << "FR4G-TP <" << name << "(" << this->_level << ")>: Hey! You're TALKING to me! And I didn't even have an exclamation point over my head! This is the BEST day of my life!" << std::endl;
			break ;
		}
		case 1 :
		{
			std::cout << "FR4G-TP <" << name << "(" << this->_level << ")>: F to the R to the 4 to the G to the WHAAT!" << std::endl;
			break ;
		}
		case 2 :
		{
			std::cout << "FR4G-TP <" << name << "(" << this->_level << ")>: It's happening... it's happening!" << std::endl;
			break ;
		}
		case 3 :
		{
			std::cout << "FR4G-TP <" << name << "(" << this->_level << ")>: I'm a sexy dinosaur! Rawr!" << std::endl;
			break ;
		}
		case 4 :
		{
			std::cout << "FR4G-TP <" << name << "(" << this->_level << ")>: Times like these, I really start to question the meaning of my existence. Then I get distra-hey! What's this? This looks cool!" << std::endl;
			break ;
		}
	}
	return ;
}

FragTrap::FragTrap(FragTrap const& src)
{
	*this = src;
	return ;
}

FragTrap&	FragTrap::operator=(FragTrap const& rhs)
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

FragTrap::~FragTrap(void)
{
	int	i = rand() % 5;
	
	switch (i)
	{
		default :
		{
			std::cout << "FR4G-TP <" << this->_name << ">: I AM ON FIRE!!! OH GOD, PUT ME OUT!!!" << std::endl;
			break ;
		}
		case 1 :
		{
			std::cout << "FR4G-TP <" << this->_name << ">: The robot is dead, long live the robot!" << std::endl;
			break ;
		}
		case 2 :
		{
			std::cout << "FR4G-TP <" << this->_name << ">: This could've gone better!" << std::endl;
			break ;
		}
		case 3 :
		{
			std::cout << "FR4G-TP <" << this->_name << ">: I'm leaking!" << std::endl;
			break ;
		}
		case 4 :
		{
			std::cout << "FR4G-TP <" << this->_name << ">: I'm too pretty to die!" << std::endl;
			break ;
		}
	}
}

void	FragTrap::rangedAttack(std::string const& target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks " << target << " with it's ranged attack, hurting " << target << " for " << this->_rangedDamage << " damage." << std::endl;
}

void	FragTrap::meleeAttack(std::string const& target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks " << target << " with it's melee attack, hurting " << target << " for " << this->_meleeDamage << " damage." << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->_armor >= (int)amount)
	{
		std::cout << "That didn't even scratch FR4G-TP <" << this->_name << ">. Nothing happened." << std::endl;
		return ;
	}
	std::cout << "Oof! FR4G-TP <" << this->_name << "> took a big hit. FR4G-TP <" << this->_name << "> will surely feel that!" << std::endl;
	this->_hitPoints -= (amount - this->_armor);
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	return ;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP <" << this->_name << ">: You can't keep a good 'bot down!" << std::endl;
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	return ;
}

void	FragTrap::vaulthunter_dot_exe(std::string const& target)
{
	int i = rand() % 10;
	
	this->_energyPoints -= 25;
	if (this->_energyPoints < 0 && this->_maxEnergyPoints == 100)
	{
		std::cout << "FR4G-TP <" << this->_name << "> is completely out of energy. The attack did nothing." << std::endl;
		this->_energyPoints += 25;
		return ;
	}
	switch (i)
	{
		default :
			{
				std::cout << "FR4G-TP <" << this->_name << ">: Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY! " << target << " gets hurt." << std::endl;
				break ;
			}
		case 1 :
			{
				std::cout << "FR4G-TP <" << this->_name << ">: Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew! " << target << " gets hurt." << std::endl;
				break ;
			}
		case 2 :
			{
				std::cout << "FR4G-TP <" << this->_name << ">: All burn before the mighty Siren-trap! " << target << " gets hurt." << std::endl;
				break ;
			}
		case 3 :
			{
				std::cout << "FR4G-TP <" << this->_name << ">: Is that what people look like inside? " << target << " gets hurt." << std::endl;
				break ;
			}
		case 4 :
			{
				std::cout << "FR4G-TP <" << this->_name << ">: Bad guy go boom! " << target << " gets hurt." << std::endl;
				break ;
			}
		case 5 :
			{
				std::cout << "FR4G-TP <" << this->_name << ">: I am a tornado of death and bullets! " << target << " gets hurt." << std::endl;
				break ;
			}
		case 6 :
			{
				std::cout << "FR4G-TP <" << this->_name << ">: Ha ha ha! Fall before your robot overlord! " << target << " gets hurt." << std::endl;
				break ;
			}
		case 7 :
			{
				std::cout << "FR4G-TP <" << this->_name << ">: Bringing down the law, painfully! " << target << " gets hurt." << std::endl;
				break ;
			}
		case 8 :
			{
				std::cout << "FR4G-TP <" << this->_name << ">: Get ready for some Fragtrap face time! " << target << " gets hurt." << std::endl;
				break ;
			}
		case 9 :
			{
				std::cout << "FR4G-TP <" << this->_name << ">: Get off my lawn! " << target << " gets hurt." << std::endl;
				break ;
			}	
	}
	return ;
}
