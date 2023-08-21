/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 14:58:25 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/31 16:02:15 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H
# include "AWeapon.hpp"
# include <iostream>
# include <string>

class PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		PowerFist(PowerFist const& src);
		PowerFist&	operator=(PowerFist const& rhs);
		~PowerFist(void);
		void	attack(void) const;
};

#endif
