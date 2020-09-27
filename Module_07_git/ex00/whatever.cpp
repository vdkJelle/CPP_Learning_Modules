/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 14:29:21 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/27 16:45:22 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void		swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const&	min(T const& a, T const& b)
{
	return (a<=b ? a : b);
}

template<typename T>
T const&	max(T const& a, T const& b)
{
	return (a>b ? a : b);
}

int		main(void) 
{
	int a = 2;
	int b = 15;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl << std::endl;

	std::string c = "hello";
	std::string d = "hi";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl << std::endl;

	float f = 4.3f;
	float g = -4.8f;
	std::cout << "f = " << f << ", g = " << g << std::endl;
	::swap(f, g);
	std::cout << "f = " << f << ", g = " << g << std::endl;
	std::cout << "min(f, g) = " << ::min(f, g) << std::endl;
	std::cout << "max(f, g) = " << ::max(f, g) << std::endl;
	return (0);
}
