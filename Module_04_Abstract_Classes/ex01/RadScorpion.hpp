/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 14:58:33 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/31 16:06:15 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
# define RADSCORPION_H
# include "Enemy.hpp"
# include <iostream>
# include <string>

class RadScorpion : public Enemy
{
	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const& src);
		RadScorpion&	operator=(RadScorpion const& rhs);
		~RadScorpion(void);
		void		takeDamage(int num);
	private:	
};

#endif
