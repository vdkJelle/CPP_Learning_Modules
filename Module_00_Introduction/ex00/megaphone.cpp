/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 08:05:40 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/07/27 09:00:00 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

int		main(int ac, char **av)
{
	int		i = 1, j;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				av[i][j] = ft_toupper(av[i][j]);
				j++;
			}
			i++;
		}
	}
	i = 1;
	while (av[i])
	{
		std::cout << av[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}
