/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 14:40:46 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/18 10:47:26 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main(void)
{
	int		N(12);
	if (N <= 0)
		return (0);
	srand (time(NULL));
	ZombieHorde zombies = ZombieHorde(N);
	
	return (0);
}
