/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 13:16:03 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 21:16:21 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H
# include "ISquad.hpp"
# include <cstdlib>

class Squad : public ISquad
{
	public:
		Squad(void);
		Squad(Squad const& src);
		Squad&	operator=(Squad const& rhs);
		~Squad(void);
		int				getCount(void) const;
		ISpaceMarine*	getUnit(int) const;
		int				push(ISpaceMarine*);
	private:
		ISpaceMarine	**_array;
		int				_count;
};

#endif
