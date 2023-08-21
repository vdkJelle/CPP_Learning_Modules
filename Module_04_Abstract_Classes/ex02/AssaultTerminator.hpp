/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 13:15:37 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/05 22:16:50 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H
# include "ISpaceMarine.hpp"
# include <iostream>

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const& src);
		AssaultTerminator&	operator=(AssaultTerminator const& rhs);
		~AssaultTerminator(void);
		ISpaceMarine*	clone(void) const;
		void	battleCry(void) const;
		void	rangedAttack(void) const;
		void	meleeAttack(void) const;
	private:
};

#endif
