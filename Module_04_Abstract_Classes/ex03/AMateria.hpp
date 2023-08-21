/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 11:36:43 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/21 12:28:53 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H
# include "ICharacter.hpp"
# include <iostream>

class AMateria
{
	public:
		AMateria(std::string const& type);
		AMateria(AMateria const& src);
		AMateria&	operator=(AMateria const& rhs);
		virtual	~AMateria(void);
		std::string const&	getType(void) const;
		unsigned int		getXP(void) const;
		void				setXP(unsigned int XP);
		virtual AMateria*	clone(void) = 0;
		virtual void		use(ICharacter& target);
	private:
		AMateria(void);
		std::string		_type;
		unsigned int	_XP;
};

#endif
