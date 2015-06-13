/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 18:41:31 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/12 22:02:08 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ZombieEvent.hpp>

ZombieEvent::ZombieEvent(){
}

void			ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

Zombie			*ZombieEvent::newZombie(std::string const name){
	return (new Zombie(this->_type, name));
}
