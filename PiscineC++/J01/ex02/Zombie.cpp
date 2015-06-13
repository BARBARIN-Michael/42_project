/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 18:09:36 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/12 20:24:39 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name){
}

Zombie::~Zombie() {
	std::cout << "Destruction du Zombie etudiant (" << this->_name 
		<< ")" << std::endl;
}

void	Zombie::announce() const
{
		std::cout << "<" << this->_name << "(" << this->_type
				<< ")> Braiiiiiiinnnssss..." << std::endl;
}

