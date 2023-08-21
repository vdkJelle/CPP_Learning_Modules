/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 14:40:35 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/07/31 17:09:23 by jelvan-d      ########   odam.nl         */
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
		Zombie(void);
		~Zombie(void);
		std::string getInfo(int i) const;
		std::string	nameRandomizer(void) const;
		std::string	typeRandomizer(void) const;
	private:
		std::string _name;
		std::string _type;
};

#endif
