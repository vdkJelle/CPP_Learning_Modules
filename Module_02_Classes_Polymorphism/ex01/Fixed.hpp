/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 18:10:24 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/07 11:23:08 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const int);
		Fixed(const float);
		Fixed(Fixed const& src);
		Fixed&		operator=(Fixed const& rhs);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int raw_fpv);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					_fpv;
		static const int	_fb = 8;
};

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs);

#endif
