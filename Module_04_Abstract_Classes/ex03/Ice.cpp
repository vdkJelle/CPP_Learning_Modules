/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 11:36:46 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/21 12:30:40 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return ;
}

Ice::Ice(Ice const& src) : AMateria("ice")
{
	*this = src;
	return ;
}

Ice&	Ice::operator=(Ice const& rhs)
{
	if (this != &rhs)
		this->setXP(rhs.getXP());
	return (*this);
}

Ice::~Ice(void)
{
	return ;
}

AMateria*	Ice::clone(void)
{
	AMateria*	clone = new Ice(*this);
	return (clone);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
	return ;
}
