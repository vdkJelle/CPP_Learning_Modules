/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 12:20:35 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/29 12:07:19 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H
# include "Zombie.hpp"
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		
		void		setZombieType(std::string type);
		Zombie* 	newZombie(std::string name);
		std::string	nameRandomizer(void);
		std::string typeRandomizer(void);
	private:
		std::string	_type;
};

#endif
