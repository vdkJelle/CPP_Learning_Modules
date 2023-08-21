/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 11:36:39 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/21 12:29:12 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	return ;
}

AMateria::AMateria(std::string const& type) : _type(type), _XP(0)
{
	return ;
}

AMateria::AMateria(AMateria const& src)
{
	*this = src;
	return ;
}

AMateria&	AMateria::operator=(AMateria const& rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_XP = rhs._XP;
	}
	return (*this);
}

AMateria::~AMateria(void)
{
	return ;
}

std::string const&	AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int		AMateria::getXP(void) const
{
	return (this->_XP);
}

void				AMateria::setXP(unsigned int XP)
{
	this->_XP = XP;
	return ;
}

void				AMateria::use(ICharacter& target)
{
	(void)target;
	this->_XP += 10;
}
