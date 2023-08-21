/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/29 16:28:33 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 18:08:35 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H
# include <iostream>
# include <string>

class Victim
{
	public:
		Victim(void);
		Victim(std::string name);
		Victim(Victim const& src);
		Victim&	operator=(Victim const& rhs);
		~Victim(void);
		virtual void		getPolymorphed(void) const;
		std::string 		getName(void) const;
	protected:
		std::string _name;
	private:
};

std::ostream&	operator<<(std::ostream& o, Victim const& rhs);

#endif
