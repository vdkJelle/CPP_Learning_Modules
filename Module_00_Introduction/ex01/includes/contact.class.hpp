/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 17:01:00 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/08/29 11:51:16 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <string>
# include <iostream>

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		std::string	getVar(int n) const;
		std::string getInfo(int n) const;
		void		setInfo(int n, std::string input);
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_login;
		std::string	_postalAddress;
		std::string	_emailAddress;
		std::string	_phoneNumber;
		std::string	_birthdayDate;
		std::string	_favouriteMeal;
		std::string	_underwearColor;
		std::string	_darkestSecret;
};

#endif
