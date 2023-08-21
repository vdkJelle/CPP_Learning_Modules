/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FeralGhoul.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 17:30:33 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 17:32:25 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FERALGHOUL_H
# define FERALGHOUL_H
# include "Enemy.hpp"
# include <iostream>
# include <string>

class FeralGhoul : public Enemy
{
	public:
		FeralGhoul(void);
		FeralGhoul(FeralGhoul const& src);
		FeralGhoul&	operator=(FeralGhoul const& rhs);
		~FeralGhoul(void);
		void		takeDamage(int num);
	private:	
};

#endif
