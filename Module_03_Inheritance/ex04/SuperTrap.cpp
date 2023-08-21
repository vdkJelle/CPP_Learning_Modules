/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 14:51:53 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 15:51:56 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	return ;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 5), NinjaTrap(name), FragTrap(name)
{
	int	i = rand() % 5;

	switch (i)
	{
		default :
		{
			std::cout << "<" << name << "(" << this->_level << ")>: Super super traaaaappp" << std::endl;
			break ;
		}
		case 1 :
		{
			std::cout << "<" << name << "(" << this->_level << ")>: Super what exactly? I'm super what?" << std::endl;
			break ;
		}
		case 2 :
		{
			std::cout << "<" << name << "(" << this->_level << ")>: It's a bird, it's a plane, no it's SuperTrap!" << std::endl;
			break ;
		}
		case 3 :
		{
			std::cout << "<" << name << "(" << this->_level << ")>: Super trap saving the daayy." << std::endl;
			break ;
		}
		case 4 :
		{
			std::cout << "<" << name << "(" << this->_level << ")>: No I'm not SuperTrap, I'm Clark Kent." << std::endl;
			break ;
		}
	}
	return ;
}

SuperTrap::SuperTrap(SuperTrap const& src) : ClapTrap(src._hitPoints, src._maxHitPoints, src._energyPoints, src._maxEnergyPoints, src._level, src._name, src._meleeDamage, src._rangedDamage, src._armor), NinjaTrap(src), FragTrap(src)
{
	*this = src;
	return ;
}

SuperTrap&	SuperTrap::operator=(SuperTrap const& rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

SuperTrap::~SuperTrap(void)
{
	int	i = rand() % 5;
	
	switch (i)
	{
		default :
		{
			std::cout << "<" << this->_name << ">: Nooo, not kryptonite!" << std::endl;
			break ;
		}
		case 1 :
		{
			std::cout << "<" << this->_name << ">: Look after Lois for me..." << std::endl;
			break ;
		}
		case 2 :
		{
			std::cout << "<" << this->_name << ">: Fuck you Lex Luther." << std::endl;
			break ;
		}
		case 3 :
		{
			std::cout << "<" << this->_name << ">: Not so super after all...." << std::endl;
			break ;
		}
		case 4 :
		{
			std::cout << "<" << this->_name << ">: So my end is the same as the Batman vs Superman movie...." << std::endl;
			break ;
		}
	}
	return ;
}

void    SuperTrap::rangedAttack(std::string const& target)
{
    return (FragTrap::rangedAttack(target));
}

void    SuperTrap::meleeAttack(std::string const& target)
{
    return (NinjaTrap::meleeAttack(target));
}
