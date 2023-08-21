/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 14:58:31 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 18:15:08 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include "AWeapon.hpp"
# include "Enemy.hpp"
# include <iostream>
# include <string>

class Character
{
	public:
		Character(std::string const& name);
		Character(Character const& src);
		Character&	operator=(Character const& rhs);
		~Character(void);
		void				recoverAP(void);
		void				equip(AWeapon* weap);
		void				attack(Enemy* myMind);
		std::string const	getName(void) const;
		int					getAP(void) const;
		AWeapon*			getWeap(void) const;
	private:
		Character(void);
		std::string			_name;
		int					_ap;
		AWeapon*			_weap;
};

std::ostream&	operator<<(std::ostream &o, Character const& rhs);

#endif
