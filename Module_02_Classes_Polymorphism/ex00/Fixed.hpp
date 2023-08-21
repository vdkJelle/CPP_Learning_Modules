/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 18:10:24 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/05 18:47:43 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const& src);
		Fixed&		operator=(Fixed const& rhs);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int raw_fpv);
	private:
		int					_fpv;
		static const int	_fb = 8;
};

#endif
