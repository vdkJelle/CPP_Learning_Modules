/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 17:24:36 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/07/31 21:16:21 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *pointer_to_str = &str;
	std::string &reference_to_str = str;
	
	std::cout << "This is the pointer to str: " << *pointer_to_str << std::endl;
	std::cout << "This is the reference to str: " << reference_to_str << std::endl;	
	return (0);	
}
