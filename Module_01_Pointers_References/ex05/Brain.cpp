/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 21:18:17 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/01 17:26:18 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(std::string size, std::string IQ) : _size(size), _IQ(IQ)
{
	return ;
}

Brain::~Brain(void)
{
	return ;
}

std::string		Brain::identify(void) const
{
	std::stringstream buff;
	
	buff << this;
	return(buff.str());
}
