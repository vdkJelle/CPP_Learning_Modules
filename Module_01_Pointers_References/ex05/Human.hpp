/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 21:18:20 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/29 13:49:43 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
# include "Brain.hpp"
# include <string>

class Human
{
	public:
		Human(void);
		~Human(void);
		std::string identify(void);
		Brain const&	getBrain(void);
	private:
		Brain const	_brain;
};

#endif
