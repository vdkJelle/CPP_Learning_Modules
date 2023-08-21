/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 18:10:21 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/07 11:47:23 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fpv(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const nb) : _fpv(nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fpv = nb << this->_fb;
	return ;
}

Fixed::Fixed(float const nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fpv = (int)roundf(nb * (1 << this->_fb));
	return ;
}

Fixed::Fixed(Fixed const& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed& Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fpv = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits(void) const
{
	return (this->_fpv);
}

void	Fixed::setRawBits(int raw_fpv)
{
	this->_fpv = raw_fpv;
	return ;
}

float	Fixed::toFloat(void) const
{
	return (this->_fpv / (float)(1 << this->_fb));
}

int		Fixed::toInt(void) const
{
	return (this->_fpv >> this->_fb);
}

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs)
{
	o << rhs.toFloat();
	return (o);
}
