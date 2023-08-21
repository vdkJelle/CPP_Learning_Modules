/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 17:00:56 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/29 11:50:14 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/contact.class.hpp"

static void	showContact(int m, Contact *contact)
{
	std::string	input;

	while (true)
	{
		std::cout << "Please enter the indexnumber of the contact you want to see: ";
		std::getline(std::cin, input);
		if (input[0] < '1' || input[0] > '8' || input.length() > 1)
		{
			std::cout << "Please input a valid number between 1 and 8.\n";
			continue ;
		}
		if (m + '0' < input[0])
		{
			if (m == 1)
				std::cout << "Please select number 1.\n";
			else if (m == 2)
				std::cout << "Please select number 1 or 2\n";
			else if (m > 2 && m < 8)
				std::cout << "Please select a number between 1 and " << m << std::endl;
			continue ;
		}
		break ;
	}
	for (int i(1); i < 12; i++)
		std::cout << "This is your contact's " << contact->getVar(i) <<  contact[input[0] - '1'].getInfo(i) << std::endl;
}

static void	listContact(int i, Contact *contact)
{
	std::string	tmp;
	int			n(1);
	int			m(0);
	int			indexnum(1);
	
	if (i == 0)
	{
		std::cout << "No contacts registered yet, please add a contact\n";
		return ;
	}
	std::cout << "|----------|----------|----------|----------|\n";
	std::cout << "|     Index|First name| Last name|  Nickname|\n";
	std::cout << "|----------|----------|----------|----------|\n";
	while (i > 0)
	{
		std::cout << "|";
		std::cout << "         " << indexnum++ << "|";
		for (int field(0); field < 3; field++)
		{
			tmp = contact[m].getInfo(n);
			if (tmp.length() > 9)
				tmp = tmp.substr(0, 9) + '.';
			for (unsigned long j(10); j > tmp.length(); j--)
				std::cout << " ";
			std::cout << tmp << "|";
			n++;
		}
		std::cout << std::endl;
		n = 1;
		m++;
		i--;
	}
	std::cout << "|----------|----------|----------|----------|\n";
	showContact(m, contact);
}

static void	createContact(std::string input, Contact &contact)
{
	for (int n(1); n < 12; n++)
	{
		input.clear();
		std::cout << "Please enter your " << contact.getVar(n);
		std::getline(std::cin, input);
		contact.setInfo(n, input);
	}
}

int			main(void)
{
	Contact		contact[8];
	int			i(0);
	std::string	input;
	
	while (1)
	{
		input.clear();
		std::cout << "Please enter one of the following commands: add, search or exit\n";
		std::getline(std::cin, input);
		for (int j = 0; input[j]; j++)
			input[j] = toupper(input[j]);
		if (input == "ADD" && i >= 8)
			std::cout << "Your phonebook is full, if you wish to enter new numbers please exit\n";
		else if (input == "ADD")
			createContact(input, contact[i++]);
		else if (input == "SEARCH")
			listContact(i, contact);
		else if (input == "EXIT")
			return (0);
		// else
		// 	std::cout << "Invalid input, rtfm.\n";
	}
}
