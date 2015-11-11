/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 16:08:30 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/24 17:45:29 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 14:55:17 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/24 15:21:38 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <stdio.h>

struct Data {
	std::string		str1;
	int				int1;
	std::string		str2;
};

void	*serialized(void)
{
	std::string alphanum("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	char	rStr[9] = {0};
	int		rInt;
	char	rStr2[9] = {0};
	char	*str = new char[21];
	size_t	cmp = 0;
	int a, b;
	str[20] = '\0';
	while (cmp < 8)
	{
		a = rand() % alphanum.size();
		b = rand() % alphanum.size();
		while (b == a)
			b = rand() % alphanum.size();
		rStr[cmp] = alphanum.c_str()[a];
		rStr2[cmp] = alphanum.c_str()[b];
		++cmp;
	}
	rInt = rand() % 256;
	std::cout << "Ecriture de str1 : " << rStr << std::endl;
	std::cout << "Ecriture de int  : " << rInt << std::endl;
	std::cout << "Ecriture de str2 : " << rStr2 << std::endl;
	cmp = 0;
	while (cmp < 20)
	{
		if (cmp < 8)
			str[cmp] = rStr[cmp];
		else if (cmp < 12)
			str[cmp] = (reinterpret_cast<char *>(&rInt))[cmp - 8];
		else if (cmp < 20)
			str[cmp] = rStr2[cmp - 12];
		++cmp;
	}
	str[cmp] = '\0';
	return (static_cast<void *>(str));
}

Data	*deserialized(void *s1)
{
	Data *data = new	Data;
	char				str1[9] = {0};
	char				str2[9] = {0};
	char				*str = reinterpret_cast<char *>(s1);
	int					cmp = 0;

	while (cmp < 20)
	{
		if (cmp < 8)
			str1[cmp] = str[cmp];
		else if (cmp < 12)
			(reinterpret_cast<char *>(&data->int1))[cmp - 8] = str[cmp];
		else if (cmp < 20)
			str2[cmp - 12] = str[cmp];
		++cmp;
	}
	data->str1 = static_cast<std::string>(str1);
	data->str2 = static_cast<std::string>(str2);
	std::cout << "Lecture de str1 : " << data->str1 << std::endl;
	std::cout << "Lecture de int  : " << data->int1 << std::endl;
	std::cout << "Lecture de str2 : " << data->str2 << std::endl;
	return (data);
}

int		main(void)
{
	void	*str;
	Data	*data = NULL;

	srand(time(NULL));
	str = serialized();
	data = deserialized(str);
}
