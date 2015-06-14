/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 15:16:51 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/13 17:08:46 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon(std::string typeWeapon) : _typeWeapon(typeWeapon) {
}

const std::string&	Weapon::getType() const
{
	return (this->_typeWeapon);
}

void			Weapon::setType(std::string typeWeapon)
{
	this->_typeWeapon = typeWeapon;
}
