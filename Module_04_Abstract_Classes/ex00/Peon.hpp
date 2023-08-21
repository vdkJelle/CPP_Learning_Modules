/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/29 16:28:29 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/30 14:31:58 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H
# include "Victim.hpp"
# include <iostream>
# include <string>

class Peon : public Victim
{
	public:
		Peon(void);
		Peon(std::string name);
		Peon(Peon const& src);
		Peon&	operator=(Peon const& rhs);
		void	getPolymorphed(void) const;
		~Peon(void);
	private:
};

#endif
