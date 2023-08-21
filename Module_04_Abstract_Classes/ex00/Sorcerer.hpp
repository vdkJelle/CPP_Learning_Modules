/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/29 16:28:25 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/30 14:50:24 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H
# include "Victim.hpp"
# include <iostream>
# include <string>

class Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const& src);
		Sorcerer&	operator=(Sorcerer const& rhs);
		~Sorcerer(void);
		void		polymorph(Victim const&) const;
		std::string	getName(void) const;
		std::string getTitle(void) const;
	private:
		Sorcerer(void);
		std::string	_name;
		std::string	_title;
};

std::ostream&	operator<<(std::ostream& o, Sorcerer const& rhs);

#endif
