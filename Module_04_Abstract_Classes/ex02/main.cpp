/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 13:15:30 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/20 21:27:29 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int		main(void)
{
	ISpaceMarine*	bob = new TacticalMarine;
	ISpaceMarine*	jim = new AssaultTerminator;
	ISpaceMarine*	fred = new TacticalMarine;

	ISquad* 		vlc = new Squad;
	ISquad*			vlc2 = new Squad;

	vlc2->push(bob);
	vlc2->push(jim);
	vlc2->push(fred);
	*((Squad*)vlc) = *((Squad*)vlc2);

	std::cout << vlc->getCount() << std::endl;
	std::cout << vlc->getUnit(15) << std::endl;
	std::cout << vlc->getUnit(2) << std::endl;

	for (int i(0); i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << cur << std::endl;
	}
	for (int i(0); i < vlc2->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc2->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << cur << std::endl;
	}

	delete vlc;
	delete vlc2;

	return 0;
}
