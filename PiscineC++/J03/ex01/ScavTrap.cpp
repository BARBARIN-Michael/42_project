/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 10:40:47 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/17 12:59:47 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>
#include <iostream>
#include <cstdlib>
#include <ctime>

ScavTrap::ScavTrap(std::string name) :
						_hitPts(100),
						_maxHitPts(100),
						_energyPts(100),
						_maxEnergyPts(100),
						_Level(1),
						_name(name),
						_meleeAttacksDamage(30),
						_rangedAttacksDamage(20),
						_armorDamageReduction(5) {
	std::cout
		<< "\033[33mFR4F-TP hmmm tu sens boooon " << name
		<< ", .... J'en transpire du SLIP\033[0m"  << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &) {
	
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs) {
	std::cout << "And one clonage, One!" << std::endl;
	this->_hitPts					= rhs._hitPts;
	this->_maxHitPts				= rhs._maxHitPts;
	this->_energyPts				= rhs._energyPts;
	this->_maxEnergyPts				= rhs._maxEnergyPts;
	this->_Level					= rhs._Level;
	this->_meleeAttacksDamage		= rhs._meleeAttacksDamage;
	this->_rangedAttacksDamage		= rhs._rangedAttacksDamage;
	this->_armorDamageReduction		= rhs._armorDamageReduction;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout 
		<< "\033[33mFR4F-TP "<< "si t'as pas mal, tu vaut que dalle\033[0m" << std::endl;
	
}


void		ScavTrap::meleeAttack(std::string const& target) {
	std::cout
		<< "FR4F-TP " << this->_name << " attacks " << target
		<< " at melee, causing "
		<< this->getMeleeDamage()
		<< " points of damage!" << std::endl;
}

void		ScavTrap::rangedAttack(std::string const& target) {
	std::cout
		<< "FR4F-TP " << this->_name << " attacks " << target
		<< "at range, causing "
		<< this->getRangedDamage()
		<< " points of damage!" << std::endl;
}

void		ScavTrap::takeDamage(size_t amount) {
	size_t		total = 0;

	std::cout << "\033[31m";
	if (this->getHits() == 0) {
		std::cout << "Congratulation, you pilled this corpse?" << std::endl;
		return ;
	}
	total = this->getRangedDamage() - this->getDamageReduc();
	total = total > this->getHits() ? this->getHits() : total;
	setHits(-total);
	if (this->getHits() == 0)
		std::cout << this->getName() << " DECES DEAD!" << std::endl;
	else
		std::cout
			<< "AILLE OUILLE, you take in ass...!"
			<< "[" << this->getHits() << "/" << this->_maxHitPts  << "]"
			<< std::endl;
	std::cout << "\033[0m";
}

void		ScavTrap::beRepaired(size_t amount) {
	if (this->_hitPts > 0)
	{
		if ((this->getHits() + amount) > this->_maxHitPts)
			amount = this->_maxHitPts - this->getHits();
		std::cout
			<< "FR4F-TP "<< "TGCM, +" << amount << std::endl;
		this->setHits(amount);
	}
	else
		std::cout
			<< "FR4F-TP "
			<< "TGCPM, You can't survive MUAHAHAHA!" << std::endl;
}

size_t			ScavTrap::getDamageReduc() {
	return this->_armorDamageReduction;
}

size_t			ScavTrap::getMeleeDamage() {
	return this->_meleeAttacksDamage;
}

size_t			ScavTrap::getRangedDamage() {
	return this->_rangedAttacksDamage;
}

size_t			ScavTrap::getHits() {
	return this->_hitPts;
}

size_t			ScavTrap::getEnergy() {
	return (this->_energyPts);
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


void			ScavTrap::setHits(short modHits) {
	if (modHits < 0)
		this->_hitPts -= (modHits * -1);
	else
		this->_hitPts += (modHits);
}

std::string const		ScavTrap::getName() const {
	return this->_name;
}
