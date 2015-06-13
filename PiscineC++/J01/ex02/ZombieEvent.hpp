/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 18:42:02 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/12 20:21:49 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <Zombie.hpp>
# include <ldap.h>

class ZombieEvent {
	private :
		std::string		_type;
	public :
		ZombieEvent();
		void	setZombieType(std::string type);
		Zombie *newZombie(std::string const name);
};

#endif
