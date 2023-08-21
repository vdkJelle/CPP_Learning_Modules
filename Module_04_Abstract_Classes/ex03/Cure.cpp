/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 11:36:45 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/21 12:46:16 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::Cure(Cure const& src) : AMateria("cure")
{
	*this = src;
	return ;
}

Cure&	Cure::operator=(Cure const& rhs)
{
	if (this != &rhs)
		this->setXP(rhs.getXP());
	return (*this);
}

Cure::~Cure(void)
{
	return ;
}

AMateria*	Cure::clone(void)
{
	AMateria*	clone = new Cure(*this);
	return (clone);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
	return ;
}
