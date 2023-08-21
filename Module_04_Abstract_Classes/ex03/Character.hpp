/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 11:36:47 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/07 14:15:28 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <cstdlib>
# include <iostream>

class Character : public ICharacter
{
	public:
		Character(std::string name);
		Character(Character const& src);
		Character&	operator=(Character const& rhs);
		~Character(void);
		std::string const&	getName(void) const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
	private:
		Character(void);
		std::string	_name;
		AMateria	*_array[4];
		int			_inv;
};

#endif
