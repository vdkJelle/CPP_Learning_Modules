/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperSledge.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 17:21:35 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 17:22:58 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERSLEDGE_H
# define SUPERSLEDGE_H
# include "AWeapon.hpp"
# include <iostream>
# include <string>

class SuperSledge : public AWeapon
{
	public:
		SuperSledge(void);
		SuperSledge(SuperSledge const& src);
		SuperSledge&	operator=(SuperSledge const& rhs);
		~SuperSledge(void);
		void	attack(void) const;
};

#endif
