/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 12:31:30 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/28 17:50:48 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void)
{
	return ;
}

Span::Span(unsigned int N) : _N(N)
{
	return ;
}

Span::Span(Span const& src)
{
	*this = src;
}

Span&	Span::operator=(Span const& rhs)
{
	if (this != &rhs)
	{
		this->_array = rhs._array;
		this->_N = rhs._N;
	}
	return (*this);
}

Span::~Span(void)
{
	return ;
}

void	Span::addNumber(int nb)
{
	if (this->_array.size() >= this->_N)
		throw std::runtime_error("No room in vector");
	this->_array.push_back(nb);
	return ;
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (std::distance(begin, end) + this->_array.size() > this->_N)
		throw std::runtime_error("No room in vector");
	this->_array.insert(this->_array.end(), begin, end);
	return ;
}

long	Span::shortestSpan(void) const
{
	long 						ret = LONG_MAX;
	std::vector<int>			tmp(this->_array.size());
	
	if (this->_array.size() <= 1)
		throw std::runtime_error("Not enough numbers in container to call shortestSpan");
	std::copy(this->_array.begin(), this->_array.end(), tmp.begin());
	std::sort(tmp.begin(), tmp.end());
	for (std::vector<int>::iterator i = tmp.begin(); i != tmp.end() - 1; i++)
	{
		if (std::abs((long)*(i + 1) - (long)*i) < ret)
			ret = std::abs((long)*(i + 1) - (long)*i);
	}
	return (ret);
}

long	Span::longestSpan(void) const
{
	long max_element;
	long min_element;
	long ret;

	if (this->_array.size() <= 1)
		throw std::runtime_error("Not enough numbers in container to call longestSpan");
	max_element = *std::max_element(this->_array.begin(), this->_array.end());
	min_element = *std::min_element(this->_array.begin(), this->_array.end());
	ret = max_element - min_element;
	return (ret);
}
