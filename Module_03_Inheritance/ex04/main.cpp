/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 13:25:42 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 15:50:04 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	srand (time(NULL));
	FragTrap frag("FragTrap");
	ScavTrap scav("ScavTrap");
	NinjaTrap ninja("NinjaTrap");
	SuperTrap kent("Clark Kent");
	
	for (int i = 0; i < 5; i++)
		frag.meleeAttack("Jelle");
	for (int i = 0; i < 5; i++)
		frag.takeDamage(30);
	for (int i = 0; i < 5; i++)
		frag.rangedAttack("Jelle");
	for (int i = 0; i < 5; i++)
		frag.vaulthunter_dot_exe("Jelle");
	for (int i = 0; i < 5; i++)
		frag.beRepaired(10);
	for (int i = 0; i < 5; i++)
		scav.meleeAttack("Jelle");
	for (int i = 0; i < 5; i++)
		scav.takeDamage(30);
	for (int i = 0; i < 5; i++)
		scav.rangedAttack("Jelle");
	for (int i = 0; i < 5; i++)
		scav.challengeNewcomer();
	for (int i = 0; i < 5; i++)
		scav.beRepaired(10);
	for (int i = 0; i < 5; i++)
		ninja.meleeAttack("Jelle");
	for (int i = 0; i < 5; i++)
		ninja.takeDamage(30);
	for (int i = 0; i < 5; i++)
		ninja.rangedAttack("Jelle");
	for (int i = 0; i < 5; i++)
	{
		ninja.ninjaShoebox(frag);
		ninja.ninjaShoebox(scav);
		ninja.ninjaShoebox(ninja);
	}
	for (int i = 0; i < 5; i++)
		ninja.beRepaired(10);
	for (int i = 0; i < 5; i++)
		kent.meleeAttack("Jelle");
	for (int i = 0; i < 5; i++)
		kent.takeDamage(30);
	for (int i = 0; i < 5; i++)
		kent.rangedAttack("Jelle");
	for (int i = 0; i < 5; i++)
	{
		kent.ninjaShoebox(frag);
		kent.ninjaShoebox(scav);
		kent.ninjaShoebox(ninja);
		kent.vaulthunter_dot_exe("Jelle");
	}
	for (int i = 0; i < 5; i++)
		kent.beRepaired(10);
}
