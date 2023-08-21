/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 17:57:55 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/28 18:20:16 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
# include <stack>
# include <iostream>
# include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(std::stack<T> const& src) : std::stack<T>(src) {}
		MutantStack(MutantStack const& src) : std::stack<T>(src) {}
		using std::stack<T>::operator=;
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(){return this->c.begin();}
		iterator end(){return this->c.end();}
};		

#endif
