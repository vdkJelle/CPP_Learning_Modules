/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 14:58:10 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/21 14:39:23 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "SuperSledge.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "FeralGhoul.hpp"
#include <ctime>
#include <cstdlib>

int main(void)
{ 
	Character*	me = new Character("Tesa");
	Enemy*		supermutant = new SuperMutant();
	Enemy* 		radscorpion = new RadScorpion();
	Enemy*		feralghoul = new FeralGhoul();
	AWeapon*	plasmarifle = new PlasmaRifle();
	AWeapon*	powerfist = new PowerFist();
	AWeapon*	supersledge = new SuperSledge();
	int			random_target = 0;
	int			random_weapon = 0;
	int			deadsupermutant = 0;
	int			deadradscorpion = 0;
	int			deadferalghoul = 0;
		
	srand(time(NULL));
	std::cout << *me;
	std::cout << "********************************************" << std::endl;
	while (deadsupermutant == 0 || deadradscorpion == 0 || deadferalghoul == 0)
	{
		if (deadsupermutant == 0)
			std::cout << "\033[1;31mSupermutant \033[0mhas " << supermutant->getHP() << "HP" << std::endl;
		if (deadradscorpion == 0)
			std::cout << "\033[1;31mRadScorpion \033[0mhas " << radscorpion->getHP() << "HP" << std::endl;
		if (deadferalghoul == 0)
			std::cout << "\033[1;31mFeralGhoul \033[0mhas " << feralghoul->getHP() << "HP" << std::endl;
		random_weapon = rand() % 3;
		if (random_weapon == 0)
			me->equip(plasmarifle);
		else if (random_weapon == 1)
			me->equip(powerfist);
		else if (random_weapon == 2)
			me->equip(supersledge);
		std::cout << *me;
		random_target = rand() % 3;
		if (me->getAP() - me->getWeap()->getAPCost() >= 0)
		{
			if (random_target == 0)
			{
				if (deadsupermutant == 0)
					me->attack(supermutant);
				else if (deadradscorpion == 0)
					me->attack(radscorpion);
				else
					me->attack(feralghoul);
			}
			else if (random_target == 1)
			{
				if (deadradscorpion == 0)
					me->attack(radscorpion);
				else if (deadsupermutant == 0)
					me->attack(supermutant);
				else
					me->attack(feralghoul);
			}
			else if (random_target == 2)
			{
				if (deadferalghoul == 0)
					me->attack(feralghoul);
				else if (deadsupermutant == 0)
					me->attack(supermutant);
				else
					me->attack(radscorpion);
			}
		}
		else
			me->recoverAP();
		if (deadsupermutant == 0 && supermutant->getHP() == 0)
		{
			std::cout << me->getName() << " killed " << supermutant->getType() << "!" << std::endl;
			deadsupermutant = 1;
			delete supermutant;
		}
		else if (deadradscorpion == 0 && radscorpion->getHP() == 0)
		{
			std::cout << me->getName() << " killed " << radscorpion->getType() << "!" << std::endl;
			deadradscorpion = 1;
			delete radscorpion;
		}
		else if (deadferalghoul == 0 && feralghoul->getHP() == 0)
		{
			std::cout << me->getName() << " killed " << feralghoul->getType() << "!" << std::endl;
			deadferalghoul = 1;
			delete feralghoul;
		}
	}
	std::cout << "********************************************" << std::endl;
	delete plasmarifle;
	delete powerfist;
	delete supersledge;
	delete me;
	return (0);
}
