/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 22:29:49 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/12 23:36:12 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ZombieHorde.hpp>

ZombieHorde::ZombieHorde(int N)
{
	this->_n = N;
	_zombies = new Zombie[N];
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_zombies;
}

void			ZombieHorde::announceHorde()
{
	int		i;

	i = 0;
	while (i < this->_n)
	{
		this->_zombies[i].announce();
		++i;
	}
}
