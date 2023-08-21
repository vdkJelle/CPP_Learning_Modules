/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checkType.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/26 15:15:36 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/26 17:48:44 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

static int	isPrecision(std::string const& input)
{
	int count(0);

	for (unsigned int i(0); i < input.length(); i++)
	{
		if (input[i] == '.')
		{
			if (!input[i - 1] || !input[i + 1] || count == 1 || !isdigit(input[i - 1]) || !isdigit(input[i + 1]))
				return (0);
			else
				count++;
		}
	}
	return (count);
}

static bool	isChar(std::string const& input)
{
	if (input[0] == '\0')
		return (true);
	if (((input[0] >= '!' && input[0] <= '/') || (input[0] >= ':' && input[0] <= '~')) && input.length() == 1 )
		return (true);
	return (false);
}

static bool	isFloat(std::string const& input)
{
	if (input == "nanf" || input == "+inff" || input == "-inff")
		return (true);
	if (!isPrecision(input))
		return (false);
	if (input[input.length() - 1] != 'f')
		return (false);
	for (unsigned int i(0); i < input.length() - 1; i++)
	{
		if (i == 0 && input[i] == '-')
			i++;
		if ((input[i] < '0' || input[i] > '9') && input[i] != '.')
			return (false);
	}
	return (true);
}

static bool isDouble(std::string const& input)
{
	if (input == "nan" || input == "+inf" || input == "-inf")
		return (true);
	if (!isPrecision(input))
		return (false);
	for (unsigned int i(0); i < input.length(); i++)
	{
		if (i == 0 && input[i] == '-')
			i++;
		if ((input[i] < '0' || input[i] > '9') && input[i] != '.')
			return (false);
	}
	return (true);
}

static bool	isInt(std::string const& input)
{
	if (isPrecision(input))
		return (false);
	for (unsigned int i(0); i < input.length(); i++)
	{
		if (i == 0 && input[i] == '-')
			i++;
		if (input[i] < '0' || input[i] > '9')
			return (false);
	}
	return (true);
}

std::string	getType(std::string const& input)
{
	std::string type;
	
	if (isChar(input))
		type = "char";
	else if (isFloat(input))
		type = "float";
	else if (isDouble(input))
		type = "double";
	else if (isInt(input))
		type = "int";
	else
		type = "invalid type";
	return (type);
}
