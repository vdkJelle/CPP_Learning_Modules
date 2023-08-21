/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 11:02:44 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/29 12:03:52 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H
# include <iostream>
# include <string>

class Pony
{
	public:
		Pony(std::string appearance, std::string personality);
		~Pony(void);

	private:
		std::string const _appearance;
		std::string const _personality;
};

#endif
