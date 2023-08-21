/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 13:16:01 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 21:24:28 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _array(NULL), _count(0)
{
	return ;
}

Squad::Squad(Squad const& src)
{
	this->_array = new ISpaceMarine*[src._count];
	this->_count = src._count;
	for (int i(0); i < this->_count; i++)
		this->_array[i] = src._array[i]->clone();
	return ;
}

Squad&	Squad::operator=(Squad const& rhs)
{
	if (this != &rhs)
	{
		for (int i(0); i < this->_count; i++)
			delete this->_array[i];
		delete [] this->_array;
		this->_array = new ISpaceMarine*[rhs._count];
		this->_count = rhs._count;
		for (int i(0); i < this->_count; i++)
			this->_array[i] = rhs._array[i]->clone();
	}
	return (*this);
}

Squad::~Squad(void)
{
	for (int i(0); i < this->_count; i++)
		delete this->_array[i];
	delete [] this->_array;
	this->_array = NULL;
	return ;
}

int				Squad::getCount(void) const
{
	return (this->_count);
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (n >= this->getCount())
		return (NULL);
	return (this->_array[n]);
}

int				Squad::push(ISpaceMarine* marine)
{
	if (!marine)
		return (this->_count);
	for (int i(0); i < this->_count; i++)
	{
		if (marine == this->_array[i])
			return (this->_count);
	}
	ISpaceMarine** newArray = new ISpaceMarine*[this->_count + 1];
	for (int j(0); j < this->_count; j++)
		newArray[j] = this->_array[j];
	newArray[this->_count] = marine;
	delete [] this->_array;
	this->_array = newArray;
	this->_count++;
	return (this->_count);
}
