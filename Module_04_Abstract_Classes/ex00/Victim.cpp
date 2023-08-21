/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/29 16:28:31 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/30 14:32:23 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
	return ;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
	return ;
}

Victim::Victim(Victim const& src)
{
	*this = src;
	return ;
}

Victim&	Victim::operator=(Victim const& rhs)
{
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
	return ;
}

void	Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
	return ;
}

std::string	Victim::getName(void) const
{
	return (this->_name);
}

std::ostream&	operator<<(std::ostream& o, Victim const& rhs)
{
	o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
	return (o);
}
