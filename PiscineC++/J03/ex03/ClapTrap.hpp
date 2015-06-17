/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 10:41:04 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/17 15:41:57 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTRAP_HPP
# define ClapTRAP_HPP

#include <string>

class ClapTrap {

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
		ClapTrap(size_t				hitPts,
                 size_t				maxHitPts,
                 size_t				energyPts,
                 size_t				maxEnergyPts,
                 size_t				Level,
                 std::string		name,
                 size_t				meleeAttacksDamage,
                 size_t				rangedAttacksDamage,
                 size_t				armorDamageReduction);

		ClapTrap(ClapTrap const &rhs);
		ClapTrap & operator=(ClapTrap const &rhs);
		~ClapTrap();

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
