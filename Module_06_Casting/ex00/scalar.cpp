/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   scalar.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/26 09:01:53 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/26 18:32:46 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

static void	forChar(long double nb, std::string input)
{
	char	c;

	std::cout << "char: ";
	if ((nb >= CHAR_MIN && nb <= CHAR_MAX) && input != "nan" && input != "nanf" && input != "+inf" && input != "+inff" && input != "-inf" && input != "-inff")
	{
		if (std::isprint(nb))
		{
			c = static_cast<char>(nb);
			std::cout << c << std::endl;
		}
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	return ;
}

static void	forInt(long double nb, std::string input)
{
	int		i;
	
	std::cout << "int: ";
	if ((nb >= INT_MIN && nb <= INT_MAX) && input != "nan" && input != "nanf" && input != "+inf" && input != "+inff" && input != "-inf" && input != "-inff")
	{
		i = static_cast<int>(nb);
		std::cout << i << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	return ;
}

static void	forFloat(long double nb, std::string input)
{
	float	f;

	std::cout << "float: ";
	if (nb >= FLT_MIN || nb <= FLT_MAX || input == "nanf" || input == "+inff" || input == "-inff" || input == "nan" || input == "+inf" || input == "-inf")
	{
		f = static_cast<double>(nb);
		std::cout << std::fixed << std::showpoint << std::setprecision(1) << f << "f" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	return ;
}

static void	forDouble(long double nb, std::string input)
{
	double	d;

	std::cout << "double: ";
	if (nb >= DBL_MIN || nb <= DBL_MAX || input == "nan" || input == "+inf" || input == "-inf" || input == "nanf" || input == "+inff" || input == "-inff")
	{
		d = static_cast<double>(nb);
		std::cout << std::fixed << std::showpoint << std::setprecision(1) << d << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	return ;
}

int		main(int ac, char **av)
{
	std::string	input;
	std::string	type;
	long double	d;
	int			i;
	
	if (ac != 2)
	{
		std::cout << "Error, wrong input" << std::endl;
		return (1);
	}
	input = av[1];
	if (input.length() == 0)
		input[0] = '\0';
	type = getType(input);
	if (type == "invalid type")
	{
		std::cout << "Invalid literal type" << std::endl;
		return (1);
	}
	std::cout << "type: " << type << std::endl;
	if (type == "char")
	{
		i = static_cast<int>(input[0]);
		d = static_cast<long double>(i);
	}
	else
		d = atof(av[1]);
	forChar(d, input);
	forInt(d, input);
	forFloat(d, input);
	forDouble(d, input);
	return (0);
}
