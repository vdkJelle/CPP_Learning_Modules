/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 13:25:42 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 14:17:31 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	srand (time(NULL));
	FragTrap frag("ClapTrap");
	
	for (int i = 0; i < 10; i++)
		frag.meleeAttack("Jelle");
	for (int i = 0; i < 10; i++)
		frag.takeDamage(20);
	for (int i = 0; i < 10; i++)
		frag.rangedAttack("Jelle");
	for (int i = 0; i < 10; i++)
		frag.vaulthunter_dot_exe("Jelle");
	for (int i = 0; i < 10; i++)
		frag.beRepaired(10);
	return (0);
}
