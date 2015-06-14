/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 15:27:27 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/13 17:20:07 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <Weapon.hpp>

class HumanA {
	
	private :
		Weapon &_weapon;
		std::string _name;

	public :
		HumanA(std::string name, Weapon &weapon);
		void	attack();
};

#endif
