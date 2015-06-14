/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 15:27:18 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/13 17:08:53 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
	
	private :
		std::string _typeWeapon;

	public :
		Weapon(std::string typeWeapon);
		const std::string&	getType() const;
		void				setType(std::string typeWeapon);
};

#endif
