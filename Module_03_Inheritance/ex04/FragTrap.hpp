/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 13:25:46 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 15:01:36 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include "ClapTrap.hpp"
# include <iostream>
# include <cstdlib>
# include <ctime>

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const& src);
		FragTrap&	operator=(FragTrap const& rhs);
		~FragTrap(void);
		void	rangedAttack(std::string const& target);
		void	meleeAttack(std::string const& target);
		void	vaulthunter_dot_exe(std::string const& target);
	private:
};

#endif
