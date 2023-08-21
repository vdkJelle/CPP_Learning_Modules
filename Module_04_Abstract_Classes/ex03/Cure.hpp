/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 11:36:48 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/07 13:59:36 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const& src);
		Cure&	operator=(Cure const& rhs);
		~Cure(void);
		AMateria*	clone(void);
		void		use(ICharacter& target);
	private:
};

#endif
