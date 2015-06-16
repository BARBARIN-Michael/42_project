/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 16:02:17 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/16 11:39:28 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <map>
#include <iostream>
#include <Human.hpp>

Human::Human(std::string name) : _name(name){
}

void	Human::meleeAttack(std::string const& target) {
	std::cout << "Warning, you are attacked by " << target <<  std::endl;
}

void	Human::rangedAttack(std::string const& target) {
	std::cout << "Warning, you are attacked has distance by " << target << std::endl;
}

void	Human::intimidatingShout(std::string const& target) {
	std::cout << "You are provoked by " << target << std::endl;
}

size_t		Human::hashFunction(std::string const& name)
{
	size_t	hashFct;
	size_t	cmp;

	hashFct = 0;
	cmp = 0;
	while (cmp < name.size())
	{
		hashFct += int(name.c_str()[cmp]);
		hashFct += (hashFct << 10);
		hashFct ^= (hashFct >> 6);
		++cmp;
	}
	hashFct += (hashFct << 3);
	hashFct ^= (hashFct >> 11);
	hashFct += (hashFct << 15);
	return (hashFct);
}

void	Human::action(std::string const& action_name, std::string const& target)
{
	void	(Human::*fcts[3])(std::string const& target);
	int		cmp;
	size_t	id;
	size_t		idPtr[3] = {	Human::hashFunction("melee"),
								Human::hashFunction("ranged"),
								Human::hashFunction("shout") };

	fcts[0] = &Human::meleeAttack;
	fcts[1] = &Human::rangedAttack;
	fcts[2] = &Human::intimidatingShout;
	cmp = 0;
	id = hashFunction(action_name);
	while (cmp < 3 && id != idPtr[cmp])
		cmp++;
	if (id == idPtr[cmp])
		(this->*fcts[cmp])(target);
	else
		std::cout << "Cannot find function : " << action_name << std::endl;
}
