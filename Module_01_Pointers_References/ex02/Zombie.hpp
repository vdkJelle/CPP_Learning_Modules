/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 12:20:32 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/07/31 14:37:47 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class Zombie
{
	public:
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void		announce(void) const;
		std::string	responseRandomizer(void) const;
	private:
		std::string _name;
		std::string _type;
};

#endif
