/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 17:00:52 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/29 11:50:08 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/contact.class.hpp"

Contact::Contact(void)
{
	// std::cout << "Constructor called\n";
}

Contact::~Contact(void)
{
	// std::cout << "Destructor called\n";
}

std::string	Contact::getVar(int n) const
{
	switch (n)
	{
		case 1 :
			return ("first name.\n");
		case 2 :
			return ("last name.\n");
		case 3 :
			return ("nickname.\n");
		case 4 :
			return ("login.\n");
		case 5 :
			return ("postal address.\n");
		case 6 :
			return ("email address.\n");
		case 7 :
			return ("phone number.\n");
		case 8 :
			return ("birthday date.\n");
		case 9 :
			return ("favourite meal.\n");
		case 10 :
			return ("underwear color.\n");
		default :
			return ("darkest secret.\n");
	}
	return ("");
}

std::string	Contact::getInfo(int n) const
{
	switch (n)
	{
		case 1 :
			return (this->_firstName);
		case 2 :
			return (this->_lastName);
		case 3 :
			return (this->_nickname);
		case 4 :
			return (this->_login);
		case 5 :
			return (this->_postalAddress);
		case 6 :
			return (this->_emailAddress);
		case 7 :
			return (this->_phoneNumber);
		case 8 :
			return (this->_birthdayDate);
		case 9 :
			return (this->_favouriteMeal);
		case 10 :
			return (this->_underwearColor);
		default :
			return (this->_darkestSecret);
	}
}

void	Contact::setInfo(int n, std::string input)
{
	switch (n)
	{
		case 1 :
		{
			this->_firstName = input;
			break ;
		}
		case 2 :
		{
			this->_lastName = input;
			break ;
		}
		case 3 :
		{
			this->_nickname = input;
			break ;
		}
		case 4 :
		{
			this->_login = input;
			break ;
		}
		case 5 :
		{
			this->_postalAddress = input;
			break ;
		}
		case 6 :
		{
			this->_emailAddress = input;
			break ;
		}
		case 7 :
		{
			this->_phoneNumber = input;
			break ;
		}
		case 8 :
		{
			this->_birthdayDate = input;
			break ;
		}
		case 9 :
		{
			this->_favouriteMeal = input;
			break ;
		}
		case 10 :
		{
			this->_underwearColor = input;
			break ;
		}
		default :
		{
			this->_darkestSecret = input;
			break ;
		}
	}
}
