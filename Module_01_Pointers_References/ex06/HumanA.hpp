/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 15:53:17 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/18 11:12:07 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"
# include <string>
# include <iostream>

class	HumanA
{
	public:
		HumanA(std::string name, Weapon& weaponType);
		~HumanA();
		void				attack(void) const;
	private:
		Weapon&				_weaponType;
		std::string const	_name;
};

#endif
