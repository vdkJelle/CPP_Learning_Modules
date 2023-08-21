/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 12:31:56 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/18 11:03:31 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>

static std::string	replaceString(std::string& buff, std::string const& s1, std::string const& s2, size_t found)
{
	found = buff.find(s1, found);
	if (found == std::string::npos)
		return (buff);
	buff.replace(found, s1.length(), s2);
	found += s2.length();
	return (replaceString(buff, s1, s2, found));
}

static void			openFindAndReplace(const char *fd, const char *s1, const char *s2)
{
	std::ifstream	fs(fd);
	std::string		buff;
	std::string		output = fd;
	const char		*str;
	output.append(".replace");
	str = output.c_str();
	std::ofstream	os(str);

	while (std::getline(fs, buff))
	{
		replaceString(buff, s1, s2, 0);
		if (fs.eof())
			os << buff;
		else
			os << buff << std::endl;
	}
	fs.close();
	os.close();
}

int					main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error.\nPlease provide a file to read and two strings as arguments.\n";
		return (1);
	}
	openFindAndReplace(av[1], av[2], av[3]);
	return (0);
}
