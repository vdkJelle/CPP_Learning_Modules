/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peasant.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 16:10:15 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 16:10:48 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEASANT_H
# define PEASANT_H
# include "Victim.hpp"
# include <iostream>
# include <string>

class Peasant : public Victim
{
	public:
		Peasant(void);
		Peasant(std::string name);
		Peasant(Peasant const& src);
		Peasant&	operator=(Peasant const& rhs);
		void	getPolymorphed(void) const;
		~Peasant(void);
	private:
};

#endif
