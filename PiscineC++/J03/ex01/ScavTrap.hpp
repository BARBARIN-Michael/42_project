/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 10:41:04 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/17 14:33:50 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>

class ScavTrap {

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
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &rhs);
		ScavTrap & operator=(ScavTrap const &rhs);
		~ScavTrap();

		void	meleeAttack(std::string const& target);
		void	rangedAttack(std::string const& target);
		void	takeDamage(size_t amount);
		void	beRepaired(size_t amount);

		size_t	challengeNewcomer(std::string const& target);

		size_t			getDamageReduc();
		size_t			getMeleeDamage();
		size_t			getRangedDamage();
		size_t			getHits();
		size_t			getEnergy();
		void			setHits(short modHits);
		std::string	const	getName() const;
};

#endif
