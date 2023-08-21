/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peasant.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 16:10:11 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 17:57:33 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peasant.hpp"

Peasant::Peasant(void)
{
	return ;
}

Peasant::Peasant(std::string name) : Victim(name)
{
	std::cout << "Ready to serve." << std::endl;
	return ;
}

Peasant::Peasant(Peasant const& src) : Victim(src._name)
{
	*this = src;
	return ;
}

Peasant&	Peasant::operator=(Peasant const& rhs)
{
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

Peasant::~Peasant(void)
{
	std::cout << "Ugh....." << std::endl;
	return ;
}

void	Peasant::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a fabulous frisbee!" << std::endl;
	return ;
}
