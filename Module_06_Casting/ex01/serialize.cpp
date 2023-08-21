/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialize.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 09:35:44 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/27 09:56:46 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>

struct	Data
{
	std::string		s1;
	int				n;
	std::string		s2;
};

Data	*deserialize(void* raw)
{
	unsigned char*	p = reinterpret_cast<unsigned char*>(raw);
	Data*			data = new Data;
	int*			i;
	unsigned char*	tmp;
	std::string		s2;

	tmp = reinterpret_cast<unsigned char*>(p);
	for (int i = 0; i < 8; i++)
		data->s1 += *(tmp + i);
	std::cout << "String1 in deserialize function = " << data->s1 << std::endl;

	i = reinterpret_cast<int*>(p + 8);
	data->n = *i;
	std::cout << "Integer in deserialize function = " << data->n << std::endl;

	tmp = reinterpret_cast<unsigned char*>(p + 12);
	for (int i = 0; i < 8; i++)
		data->s2 += *(tmp + i);
	std::cout << "String2 in deserialize function = " << data->s2 << std::endl;

	return (data);
}

void    *serialize(void)
{
    unsigned char*		array = new unsigned char[20];
    int					random;
	int*				intlocation;
	void*				ret;
	const char			alphanumerical[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

	std::cout << "String1 in serialize   function = ";
    for (int i = 0; i < 8; ++i)
	{
        array[i] = alphanumerical[rand() % (sizeof(alphanumerical) - 1)];
		std::cout << array[i];
	}
	std::cout << std::endl;

	random = rand();
	std::cout << "Integer in serialize   function = " << random << std::endl;
	intlocation = reinterpret_cast<int*>(&array[8]);
	*intlocation = random;

	std::cout << "String2 in serialize   function = ";
    for (int i = 12; i < 20; ++i)
	{
        array[i] = alphanumerical[rand() % (sizeof(alphanumerical) - 1)];
		std::cout << array[i];
	}
	std::cout << std::endl;

	ret = reinterpret_cast<void*>(array);
    return (ret);
}

int        main(void)
{
	void*			raw;
	Data*			data;
	srand(time(NULL));

	raw = serialize();
	data = deserialize(raw);
	delete [] reinterpret_cast<unsigned char*>(raw);
	delete data;
	return (0);
}
