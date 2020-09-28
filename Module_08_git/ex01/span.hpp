/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 12:31:32 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/28 17:05:02 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H
# include <iostream>
# include <vector>
# include <ctime>
# include <cstdlib>
# include <algorithm>
# include <climits>

class Span
{
	public:
		Span(unsigned int N);
		Span(Span const& src);
		Span&	operator=(Span const& rhs);
		~Span(void);
		void	addNumber(int nb);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		long	shortestSpan(void) const;
		long	longestSpan(void) const;
	private:
		Span(void);
		std::vector<int>	_array;
		unsigned int		_N;
};

#endif
