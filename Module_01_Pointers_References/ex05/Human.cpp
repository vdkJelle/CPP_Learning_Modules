/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 21:18:18 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/29 12:32:25 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) : _brain("HUGE", "200")
{
	return ;
}

Human::~Human(void)
{
	return ;
}

std::string Human::identify(void)
{
	return(this->_brain.identify());
}

Brain const&	Human::getBrain(void){
	Brain const&	brain2 = this->_brain;
	return (brain2);
}
