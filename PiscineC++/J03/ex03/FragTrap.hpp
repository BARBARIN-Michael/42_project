/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 10:16:20 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/17 15:37:13 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <ClapTrap.hpp>

class FragTrap : public ClapTrap {

	private :

	public :
		FragTrap(std::string name);
		FragTrap(FragTrap const& rhs);
		FragTrap& operator=(FragTrap const &);
		~FragTrap();

		size_t	vaulthunter_dot_exe(std::string const& target);
};

#endif
