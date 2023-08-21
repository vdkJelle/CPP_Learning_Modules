/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 12:16:13 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/07/30 11:53:54 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string appearance, std::string personality) : _appearance(appearance), _personality(personality)
{
	std::cout << "This pony " << this->_appearance  << this->_personality << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "The pony has now been terminated" << std::endl;
}
