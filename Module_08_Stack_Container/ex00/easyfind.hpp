/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 10:13:12 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/28 12:29:59 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H
# include <iostream>
# include <vector>
# include <algorithm>

template<typename T>
int		easyFind(T a, int b)
{
	std::vector<int>::iterator	it;

	it = find(a.begin(), a.end(), b);
	if (a.end() == it)
	{
		std::cout << "ERROR" << std::endl;
		return (1);
	}
	std::cout << "Found the number: " << *it << std::endl;
	return (0);
}

#endif
