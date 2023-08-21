/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 15:53:15 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/29 14:03:25 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"
# include <string>
# include <iostream>

class	HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void				attack(void) const;
		void				setWeapon(Weapon &weaponType);
	private:
		Weapon*				_weaponType;
		std::string const	_name;
};

#endif
