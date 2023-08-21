/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 11:36:46 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/21 14:29:46 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _inv(0)
{
	for (int i(0); i < 4; i++)
		this->_array[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const& src)
{
	this->_inv = src._inv;
	for (int i(0); i < 4; i++)
		this->_array[i] = src._array[i]->clone();
	return ;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& rhs)
{
	if (this != &rhs)
	{
		for (int i(0); i < this->_inv; i++)
			delete this->_array[i];
		for (int i(0); i < 4; i++)
			this->_array[i] = rhs._array[i]->clone();
		this->_inv = rhs._inv;
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i(0); i < this->_inv; i++)
		delete this->_array[i];
	return ;
}

void		MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	if (this->_inv >= 4)
	{
		std::cout << "Error, too many Materia taught." << std::endl;
		delete m;
		return ;
	}
	this->_array[this->_inv] = m;
	this->_inv++;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i(0); i < this->_inv; i++)
	{
		if (!type.compare(this->_array[i]->getType()))
			return (this->_array[i]);
	}
	return (0);
}
