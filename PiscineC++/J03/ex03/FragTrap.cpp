/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 10:16:13 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/17 15:50:16 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>
#include <ClapTrap.hpp>
#include <ctime>
#include <cstdlib>

FragTrap::FragTrap(std::string name) :
						ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5) {
	std::cout
		<< "\033[33mFR4F-TP hmmm tu sens boooon " << name
		<< ", .... J'en transpire du SLIP\033[0m"  << std::endl;
}

FragTrap::FragTrap(FragTrap const &rez) : ClapTrap(rez){
}

FragTrap& FragTrap::operator=(FragTrap const& rhs) {
	ClapTrap::operator=(rhs);
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout 
		<< "\033[33mFR4F-TP "<< "si t'as pas mal, tu vaut que dalle\033[0m" << std::endl;
}

size_t		FragTrap::vaulthunter_dot_exe(std::string const& target)
{
	static int	tryit = 0;
	int			val = tryit;
	std::string nameAttack[] = {
		"You takes the biscuit?", "It smells like trouble",
		"Any pedicurist?", "Looks up, a Donkey!",
		"Ladies 'time... euh les anglais debarques c'est plus classe..." };
	std::cout << "\033[34m";
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
	std::cout << this->getName() << " : " << nameAttack[val] << std::endl;
	std::cout << "\033[0m";
	return ((tryit = val));
}
