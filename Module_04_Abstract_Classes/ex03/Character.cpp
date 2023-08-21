/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 11:36:44 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/21 14:09:26 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	return ;
}

Character::Character(std::string name) : _name(name)
{
	for (int i(0); i < 4; i++)
		this->_array[i] = NULL;
	this->_inv = 0;
	return ;
}

Character::Character(Character const& src) : _name(src._name)
{
	*this = src;
}

Character&			Character::operator=(Character const& rhs)
{
	if (this != &rhs)
	{
		for (int i(0); i < 4; i++)
			this->_array[i] = rhs._array[i]->clone();
		this->_inv = rhs._inv;
	}
	return (*this);
}

Character::~Character(void)
{
	for (int i(0); i < this->_inv; i++)
		delete this->_array[i];
	return ;
}

std::string const&	Character::getName(void) const
{
	return (this->_name);
}

void				Character::equip(AMateria* m)
{
	if (!m || this->_inv >= 4)
		return ;
	this->_array[this->_inv] = m->clone();
	this->_inv++;
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->_inv)
		return ;
	delete this->_array[idx];
	this->_array[idx] = NULL;
	for (int i(idx); i + 1 < this->_inv; i++)
	{
		this->_array[i] = this->_array[i + 1];
		this->_array[i + 1] = NULL;
	}
	this->_inv--;
	return ;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_array[idx])
		this->_array[idx]->use(target);
}
