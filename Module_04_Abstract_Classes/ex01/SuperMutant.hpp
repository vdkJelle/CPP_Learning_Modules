/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 14:58:34 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/31 16:06:10 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H
# include "Enemy.hpp"
# include <iostream>
# include <string>

class SuperMutant : public Enemy
{
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const& src);
		SuperMutant&	operator=(SuperMutant const& rhs);
		~SuperMutant(void);
		void		takeDamage(int num);
	private:	
};

#endif
