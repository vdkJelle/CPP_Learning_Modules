/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 11:36:50 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/07 13:59:41 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H
# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const& src);
		Ice&	operator=(Ice const& rhs);
		~Ice(void);
		AMateria*	clone(void);
		void		use(ICharacter& target);
	private:
};

#endif
