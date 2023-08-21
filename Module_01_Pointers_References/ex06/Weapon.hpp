/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 15:53:13 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/03 23:21:04 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>
# include <string>

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		std::string const&	getType(void) const;
		void				setType(std::string type);
	private:
		std::string			_type;
};

#endif
