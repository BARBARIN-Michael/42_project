/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 19:30:08 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/12 22:02:06 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Zombie.hpp>
#include <ZombieEvent.hpp>
#include <time.h>
#include <stdlib.h>

static std::string	randomName(void)
{
	static std::string name = "";
	std::string newname = "";

	srand(time(NULL));
	std::string nameZombie[] = {
		"Merlin", "Marvin", "Aziz", "Melvin", "Roblabla", "Axel", "Llacroix",
		"Zaz", "Thor", "Gaethan", "Laurie", "Antoine", "Guillaume", "David", 
		"Loraine", "Lison", "Pyrate", "Vincent", "Yohan", "Eric", "Matthia"
	};
	while (1)
	{
		if ((newname = nameZombie[rand() % (21 + 1)]) != name)
			break ;
	}
	name = newname;
	return (name);
}

static void	randomChump()
{
	ZombieEvent		newEvent = ZombieEvent();
	newEvent.setZombieType("42 Zombie");
	Zombie *student = newEvent.newZombie(randomName());
	student->announce();
	delete student;
}

int					main(void)
{
	// Creation d'un zombie sur stack
	Zombie student = Zombie("un toto etudiant", randomName());
	student.announce();
	// Creation d'un zombie sur heap
	randomChump();
	return (0);
}
