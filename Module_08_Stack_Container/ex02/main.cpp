/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 17:57:48 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/28 18:30:41 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int		main(void)
{
	MutantStack<int>    mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "top element: " << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << "container size after pop: " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while(it != ite)
	{
		std::cout << "iterator value: " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return (0);
}
