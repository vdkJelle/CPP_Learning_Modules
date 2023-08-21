/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 14:24:52 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 15:03:58 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const& src);
		NinjaTrap&	operator=(NinjaTrap const& rhs);
		~NinjaTrap(void);
		void	rangedAttack(std::string const& target);
		void	meleeAttack(std::string const& target);
		void	ninjaShoebox(FragTrap &frag) const;
		void	ninjaShoebox(ScavTrap &scav) const;
		void	ninjaShoebox(NinjaTrap &ninja) const;
	private:
};

#endif
