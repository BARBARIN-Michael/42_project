/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 15:27:33 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/13 18:13:20 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

	
#include <iostream>
#include <Weapon.hpp>

class HumanB {

	private :
		Weapon *_weapon;
		std::string _name;

	public :
		HumanB(std::string name);
		void	setWeapon(Weapon &weapon);
		void	attack();
};

#endif
