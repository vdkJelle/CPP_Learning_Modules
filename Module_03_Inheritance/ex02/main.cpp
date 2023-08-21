/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 13:25:42 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/29 15:31:12 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	srand (time(NULL));
	FragTrap frag("ClapTrap");
	ScavTrap scav("ScavTrap");
	
	for (int i = 0; i < 10; i++)
		frag.meleeAttack("Jelle");
	for (int i = 0; i < 10; i++)
		frag.takeDamage(30);
	for (int i = 0; i < 10; i++)
		frag.rangedAttack("Jelle");
	for (int i = 0; i < 10; i++)
		frag.vaulthunter_dot_exe("Jelle");
	for (int i = 0; i < 10; i++)
		frag.beRepaired(10);
	for (int i = 0; i < 10; i++)
		scav.meleeAttack("Jelle");
	for (int i = 0; i < 10; i++)
		scav.takeDamage(30);
	for (int i = 0; i < 10; i++)
		scav.rangedAttack("Jelle");
	for (int i = 0; i < 10; i++)
		scav.challengeNewcomer();
	for (int i = 0; i < 10; i++)
		scav.beRepaired(10);
}
