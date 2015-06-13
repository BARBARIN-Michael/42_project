/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 19:30:08 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/12 23:17:28 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Zombie.hpp>
#include <ZombieHorde.hpp>

int					main(void)
{
	// Creation d'un zombie sur stack
	ZombieHorde		bocal_42 = ZombieHorde(25);

	bocal_42.announceHorde();
	return (0);
}
