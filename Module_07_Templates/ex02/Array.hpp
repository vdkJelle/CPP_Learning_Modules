/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 14:29:32 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/27 20:26:27 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H
# include <iostream>
# include <exception>

template<typename T>
class Array
{
	public:
		Array(void) : _array(NULL), _size(0) 
		{
			return ;
		}
		Array(unsigned int n)
		{
			this->_array = new T[n];
			this->_size = n;
		}
		Array(Array const& src)
		{
			this->_array = NULL;
			*this = src;
			return ;
		}
		Array&	operator=(Array const& rhs)
		{
			if (this != &rhs)
			{
				delete [] this->_array;
				this->_array = new T[rhs._size];
				this->_size = rhs._size;
				for (int i(0); i < this->_size; i++)
					this->_array[i] = rhs._array[i];
			}
			return (*this);
		}
		T&		operator[](int n)
		{
			if (n >= this->_size)
				throw std::out_of_range("Error: out of range\n");
			return (this->_array[n]);
		}
		~Array(void)
		{
			delete [] this->_array;
			return ;
		}
		int		size(void) const
		{
			return (this->_size);
		}
	private:
		T	*_array;
		int	_size;
};

#endif
