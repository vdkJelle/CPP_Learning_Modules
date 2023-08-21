/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 11:36:50 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/07 13:31:49 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <cstdlib>
# include <iostream>

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const& src);
		MateriaSource&	operator=(MateriaSource const& rhs);
		~MateriaSource(void);
		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const& type);
	private:
		AMateria	*_array[4];
		int			_inv;
};

#endif
