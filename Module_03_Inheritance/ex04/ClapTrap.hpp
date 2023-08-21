/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 10:17:38 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 14:49:36 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(int hitPoints, int maxHitPoints, int energyPoints, int maxEnergyPoints, int level, std::string name, int meleeDamage, int rangedDamage, int armor);
		ClapTrap(ClapTrap const& src);
		ClapTrap&	operator=(ClapTrap const& rhs);
		~ClapTrap(void);
		virtual void	rangedAttack(std::string const& target) = 0;
		virtual void	meleeAttack(std::string const& target) = 0;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string	getName(void) const;
	private:

	protected:
		int			_hitPoints;
		int			_maxHitPoints;
		int			_energyPoints;
		int			_maxEnergyPoints;
		int			_level;
		std::string	_name;
		int			_meleeDamage;
		int			_rangedDamage;
		int			_armor;
};

#endif
