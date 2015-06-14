/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 15:27:23 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/13 17:19:45 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA(std::string name, Weapon &weapon) :
	_weapon(weapon), _name(name)
{
}

void	HumanA::attack()
{
	std::cout	<< this->_name << " attacks with his "
				<< this->_weapon.getType() << std::endl;
}
