/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 15:01:14 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 14:37:08 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3)
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

ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap(src._hitPoints, src._maxHitPoints, src._energyPoints, src._maxEnergyPoints, src._level, src._name, src._meleeDamage, src._rangedDamage, src._armor)
{
	*this = src;
	return ;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
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
