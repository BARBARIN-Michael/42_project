/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 10:41:04 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/17 16:03:21 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>

class ScavTrap : public ClapTrap{

	private :

	public :
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &rhs);
		ScavTrap & operator=(ScavTrap const &rhs);
		~ScavTrap();

		size_t	challengeNewcomer(std::string const& target);
};

#endif
