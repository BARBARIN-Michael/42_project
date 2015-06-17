/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 10:16:13 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/17 00:01:25 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>
#include <ctime>
#include <cstdlib>

FragTrap::FragTrap(std::string name) : 
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

FragTrap::FragTrap(FragTrap const &rez) {
}

FragTrap& FragTrap::operator=(FragTrap const& rhs) {
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

FragTrap::~FragTrap() {
	std::cout 
		<< "\033[33mFR4F-TP "<< "si t'as pas mal, tu vaut que dalle\033[0m" << std::endl;
}

void		FragTrap::meleeAttack(std::string const& target) {
	std::cout
		<< "FR4F-TP " << this->_name << " attacks " << target
		<< " at melee, causing "
		<< this->getMeleeDamage()
		<< " points of damage!" << std::endl;
}

void		FragTrap::rangedAttack(std::string const& target) {
	std::cout
		<< "FR4F-TP " << this->_name << " attacks " << target
		<< "at range, causing "
		<< this->getRangedDamage()
		<< " points of damage!" << std::endl;
}

void		FragTrap::takeDamage(size_t amount) {
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
		std::cout << "YOU DECES DEAD!" << std::endl;
	else
		std::cout
			<< "AILLE OUILLE, you take in ass...!"
			<< "[" << this->getHits() << "/" << this->_maxHitPts << std::endl;
	std::cout << "\033[0m";
}

void		FragTrap::beRepaired(size_t amount) {
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

size_t		FragTrap::vaulthunter_dot_exe(std::string const& target)
{
	static int	tryit = 0;
	int			val = tryit;
	std::string nameAttack[] = {
		"You takes the biscuit?", "It smells like trouble",
		"Any pedicurist?", "Looks up, a Donkey!",
		"Ladies 'time... euh les anglais debarques c'est plus classe..." };
	if (this->_energyPts < 25)
	{
		std::cout << "FR4F-TP "<< "Young padawan, You don't enought rested"
			<< " for attack again!" << std::endl;
		return (0);
	}
	this->_energyPts -= 25;
	srand(time(NULL));
	while (val == tryit)
		val = rand() % 5;
	std::cout << nameAttack[val] << std::endl;
	return ((tryit = val));
}

size_t			FragTrap::getDamageReduc() {
	return this->_armorDamageReduction;
}

size_t			FragTrap::getMeleeDamage() {
	return this->_meleeAttacksDamage;
}

size_t			FragTrap::getRangedDamage() {
	return this->_rangedAttacksDamage;
}

size_t			FragTrap::getHits() {
	return this->_hitPts;
}

size_t			FragTrap::getEnergy() {
	return (this->_energyPts);
}

void			FragTrap::setHits(short modHits) {
	if (modHits < 0)
		this->_hitPts -= (modHits * -1);
	else
		this->_hitPts += (modHits);
}

std::string const		FragTrap::getName() const {
	return this->_name;
}
