/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 14:40:50 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/29 12:18:47 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H
# include "Zombie.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <ctime>

class ZombieHorde
{
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);
		void		announce(void) const;
		std::string	responseRandomizer(void) const;
	private:
		Zombie* _zombie;
		int		_N;
};

#endif
