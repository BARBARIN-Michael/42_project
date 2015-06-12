/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 15:59:28 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/10 16:34:31 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static char		*strupper(char *s1)
{
	int		cmp;

	cmp = 0;
	while (s1[cmp] != '\0')
	{
		if (s1[cmp] <= 'z' && s1[cmp] >= 'a')
			s1[cmp] = 'A' + (s1[cmp] - 'a');
		++cmp;
	}
	return (s1);
}

int		main(int ac, char **av)
{
	char	*str;
	int		cmp;

	cmp = 1;
	if (ac >= 2)
	{
		while (cmp < ac)
		{
			str = strupper(av[cmp]);
			std::cout << str;
			++cmp;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
