/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 10:40:47 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/17 15:34:35 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>
#include <ClapTrap.hpp>
#include <iostream>
#include <cstdlib>
#include <ctime>

ScavTrap::ScavTrap(std::string name)
						: ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5) {
	std::cout
		<< "\033[33mFR4F-TP hmmm tu sens boooon " << name
		<< ", .... J'en transpire du SLIP\033[0m"  << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap(rhs) {
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs) {
	ClapTrap::operator=(rhs);
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout 
		<< "\033[33mFR4F-TP "<< "si t'as pas mal, tu vaut que dalle\033[0m" << std::endl;
	
}

size_t		ScavTrap::challengeNewcomer(std::string const& target)
{
	static int	tryit = 0;
	int			val = tryit;
	std::string nameAttack[] = {
		"Pika pika", "you shall not pass", "fly you fools"
		"baby I love you, i love you baby, il est beau le lavabo?",
		"Gaspaciiooopoooooooooo" };
	std::cout << "\033[34m";
	if (this->_energyPts < 25)
	{
		std::cout << "FR4F-TP "<< "Youn loose, You don't enought rested"
			<< " for attack again!" << std::endl;
		return (0);
	}
	this->_energyPts -= 25;
	srand(time(NULL));
	while (val == tryit)
		val = rand() % 5;
	std::cout << this->getName() << " : " << nameAttack[val] << std::endl;
	std::cout << "\033[0m";
	return ((tryit = val));
}
