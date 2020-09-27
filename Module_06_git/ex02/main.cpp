/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 10:30:48 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/27 11:08:36 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void) {}

void	identify_from_reference(Base& p)
{
	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			try
			{
				A&	derivedA = dynamic_cast<A&>(p);

				(void)derivedA;
			}
			catch(std::exception& e)
			{
				std::cout << "It's not A" << std::endl;
				continue ;
			}
			std::cout << "It's A" << std::endl;
		}
		else if (i == 1)
		{
			try
			{
				B&	derivedB = dynamic_cast<B&>(p);

				(void)derivedB;
			}
			catch(std::exception& e)
			{
				std::cout << "It's not B" << std::endl;
				continue ;
			}
			std::cout << "It's B" << std::endl;
		}
		else if (i == 2)
		{
			try
			{
				C&	derivedC = dynamic_cast<C&>(p);

				(void)derivedC;
			}
			catch(std::exception& e)
			{
				std::cout << "It's not C" << std::endl;
				continue ;
			}
			std::cout << "It's C" << std::endl;
		}
	}
}

void	identify_from_pointer(Base* p)
{
	A*	derivedA = dynamic_cast<A*>(p);
	B*	derivedB = dynamic_cast<B*>(p);
	C*	derivedC = dynamic_cast<C*>(p);

	if (derivedA == NULL)
		std::cout << "It's not A" << std::endl;
	else
	{
		std::cout << "It's A" << std::endl;
	}
	if (derivedB == NULL)
		std::cout << "It's not B" << std::endl;
	else
	{
		std::cout << "It's B" << std::endl;
	}
	if (derivedC == NULL)
		std::cout << "It's not C" << std::endl;
	else
	{
		std::cout << "It's C" << std::endl;
	}
}

Base*	generate(void)
{
	Base*	derived;
	int		random;

	random = rand() % 3;	
	if (random == 0)
	{
		derived = new A();
		std::cout << "A was created, now spot it!" << std::endl;
	}
	else if (random == 1)
	{
		std::cout << "B was created, now spot it!" << std::endl;;
		derived = new B();
	}
	else if (random == 2)
	{
		derived = new C();
		std::cout << "C was created, now spot it!" << std::endl;
	}
	return (derived);
}

int		main(void)
{
	Base*	derived;
	srand(time(NULL));

	derived = generate();
	std::cout << "Identifying from pointer:" << std::endl;
	identify_from_pointer(derived);
	std::cout << "Identifying from reference:" << std::endl;
	identify_from_reference(*derived);
	delete derived;
	return (0);
}
