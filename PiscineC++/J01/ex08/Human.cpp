/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 16:02:17 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/14 17:21:35 by mbarbari         ###   ########.fr       */
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

void	Human::action(std::string const& action_name, std::string const& target)
{
	std::map<std::string, void	(Human::*)(std::string const& target)> fns;
	fns["melee"] = &Human::meleeAttack;
	fns["ranged"] = &Human::rangedAttack;
	fns["shout"] = &Human::intimidatingShout;
	if (fns.count(action_name) > 0)
		(this->*fns[action_name])(target);
	else
		std::cout << action_name << " doesn't exists" << std::endl;
}
