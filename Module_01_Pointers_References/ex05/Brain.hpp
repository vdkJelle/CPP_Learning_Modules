/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 21:18:25 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/29 13:49:33 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <string>
# include <sstream>

class Brain
{
	public:
		Brain(std::string size, std::string IQ);
		~Brain(void);
		std::string		identify(void) const;
	private:
		std::string	_size;
		std::string	_IQ;
};

#endif
