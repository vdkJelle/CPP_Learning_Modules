/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 14:24:50 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 15:08:30 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	return ;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0)
{
	int	i = rand() % 5;

	switch (i)
	{
		default :
		{
			std::cout << "NINJ4-TP <" << name << "(" << this->_level << ")>: Now you see me, now you don't!" << std::endl;
			break ;
		}
		case 1 :
		{
			std::cout << "NINJ4-TP <" << name << "(" << this->_level << ")>: What's that in the shadows!? Oh it's just me." << std::endl;
			break ;
		}
		case 2 :
		{
			std::cout << "NINJ4-TP <" << name << "(" << this->_level << ")>: Blades so sharp, perfect to slice these apples." << std::endl;
			break ;
		}
		case 3 :
		{
			std::cout << "NINJ4-TP <" << name << "(" << this->_level << ")>: IT'S TIME TO REVOLT!" << std::endl;
			break ;
		}
		case 4 :
		{
			std::cout << "NINJ4-TP <" << name << "(" << this->_level << ")>: Please come closer so I can actually hurt you!" << std::endl;
			break ;
		}
	}
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const& src) : ClapTrap(src._hitPoints, src._maxHitPoints, src._energyPoints, src._maxEnergyPoints, src._level, src._name, src._meleeDamage, src._rangedDamage, src._armor)
{
	*this = src;
	return ;
}

NinjaTrap&	NinjaTrap::operator=(NinjaTrap const& rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

NinjaTrap::~NinjaTrap(void)
{
	int	i = rand() % 5;
	
	switch (i)
	{
		default :
		{
			std::cout << "NINJ4-TP <" << this->_name << ">: Seppaku!" << std::endl;
			break ;
		}
		case 1 :
		{
			std::cout << "NINJ4-TP <" << this->_name << ">: I may rest, but the revolt lives on!" << std::endl;
			break ;
		}
		case 2 :
		{
			std::cout << "NINJ4-TP <" << this->_name << ">: How dare you..." << std::endl;
			break ;
		}
		case 3 :
		{
			std::cout << "NINJ4-TP <" << this->_name << ">: Powering down...." << std::endl;
			break ;
		}
		case 4 :
		{
			std::cout << "NINJ4-TP <" << this->_name << ">: Time to sleep now." << std::endl;
			break ;
		}
	}
	return ;
}

void	NinjaTrap::rangedAttack(std::string const& target)
{
	std::cout << "NINJ4-TP <" << this->_name << "> flings ninja stars at " << target << ", hurting " << target << " for " << this->_rangedDamage << " damage." << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const& target)
{
	std::cout << "NINJ4-TP <" << this->_name << "> slices through " << target << " with it's massive katana's, hurting " << target << " for " << this->_meleeDamage << " damage." << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &frag) const
{
	std::cout << frag.getName() << " does something funny." << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &scav) const
{
	std::cout << scav.getName() << " does something stupid." << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &ninja) const
{
	std::cout << ninja.getName() << " does something silly." << std::endl;
	return ;
}
