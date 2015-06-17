/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 10:16:20 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/17 14:34:02 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap {

	private :
		size_t				_hitPts;
		size_t				_maxHitPts;
		size_t				_energyPts;
		size_t				_maxEnergyPts;
		size_t				_Level;
		const std::string	_name;
		size_t				_meleeAttacksDamage;
		size_t				_rangedAttacksDamage;
		size_t				_armorDamageReduction;


	public :
		FragTrap(std::string name);
		FragTrap(FragTrap const& rhs);
		FragTrap& operator=(FragTrap const &);
		~FragTrap();

		void	meleeAttack(std::string const& target);
		void	rangedAttack(std::string const& target);
		void	takeDamage(size_t amount);
		void	beRepaired(size_t amount);
		size_t	vaulthunter_dot_exe(std::string const& target);

		size_t			getDamageReduc();
		size_t			getMeleeDamage();
		size_t			getRangedDamage();
		size_t			getHits();
		size_t			getEnergy();
		void			setHits(short modHits);
		std::string	const	getName() const;
};

#endif
