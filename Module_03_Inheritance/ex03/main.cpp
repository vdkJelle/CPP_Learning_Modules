/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 13:25:42 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/29 16:03:10 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	srand (time(NULL));
	FragTrap frag("FragTrap");
	ScavTrap scav("ScavTrap");
	NinjaTrap ninja("NinjaTrap");
	
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
	for (int i = 0; i < 10; i++)
		ninja.meleeAttack("Jelle");
	for (int i = 0; i < 10; i++)
		ninja.takeDamage(30);
	for (int i = 0; i < 10; i++)
		ninja.rangedAttack("Jelle");
	for (int i = 0; i < 10; i++)
	{
		ninja.ninjaShoebox(frag);
		ninja.ninjaShoebox(scav);
		ninja.ninjaShoebox(ninja);
	}
	for (int i = 0; i < 10; i++)
		ninja.beRepaired(10);
}
