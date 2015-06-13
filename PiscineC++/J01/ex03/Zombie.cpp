/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 18:09:36 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/13 00:31:20 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name){
}

Zombie::Zombie(void) : _type("Bocalien"), _name(this->randomName()) {
	std::cout << "petit test de creation de zombie : " << this->_name << std::endl;
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

std::string	Zombie::randomName(void)
{
	static std::string name = "";
	std::string newname = "";

	if (name == "")
		srand(time(NULL));
	std::string nameZombie[] = {
		"Gargamel", "Andre", "Hana", "Bambou", "Ol", "bbecker", "Sylvain",
		"Zaz", "Thor", "Gaethan", "Laurie", "Krp", "Lain", "David", 
		"Loraine", "Lison", "Pyrate", "Vincent", "Yohan", "Eric", "Matthia"
	};
	while (1)
	{
		if ((newname = nameZombie[rand() % (21 + 1)]) != name)
			break ;
	}
	name = newname;
	return (name);
}
