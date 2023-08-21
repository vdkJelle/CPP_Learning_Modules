/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 14:58:26 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/31 15:57:14 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H
# include <iostream>
# include <string>

class AWeapon
{
	public:
		AWeapon(void);
		AWeapon(std::string const& name, int apcost, int damage);
		AWeapon(AWeapon const& src);
		AWeapon&	operator=(AWeapon const& rhs);
		virtual ~AWeapon(void);
		virtual std::string	getName(void) const;
		int					getAPCost(void) const;
		int					getDamage(void) const;
		virtual	void		attack(void) const = 0;
	protected:
		std::string _name;
		int			_apcost;
		int			_damage;
	private:
};

#endif
