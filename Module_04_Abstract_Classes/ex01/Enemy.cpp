/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 14:58:29 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/05 12:47:16 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
	return ;
}

Enemy::Enemy(int hp, std::string const& type) : _hp(hp), _type(type)
{
	return ;
}

Enemy::Enemy(Enemy const& src)
{
	*this = src;
	return ;
}

Enemy&	Enemy::operator=(Enemy const& rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_hp = rhs._hp;
	}
	return (*this);
}

Enemy::~Enemy(void)
{
	return ;
}

std::string	Enemy::getType(void) const
{
	return (this->_type);
}

int			Enemy::getHP(void) const
{
	return (this->_hp);
}

void		Enemy::takeDamage(int num)
{
	if (num <= 0)
		return ;
	this->_hp -= num;
	if (this->_hp < 0)
		this->_hp = 0;
}
