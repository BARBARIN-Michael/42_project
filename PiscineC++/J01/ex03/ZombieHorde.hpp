/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 22:30:11 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/12 23:07:04 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <Zombie.hpp>

class ZombieHorde {
	
	private :
		int		_n;
		Zombie	*_zombies;
	public :
		ZombieHorde(int N);
		~ZombieHorde();
		void	announceHorde();
};

#endif
