/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 18:12:10 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/12 23:10:21 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
#include <time.h>
#include <stdlib.h>

class Zombie {
		private :
			std::string _type;
			std::string _name;

		public :
			Zombie(std::string type, std::string name);
			Zombie(void);
			~Zombie();
			void announce(void) const;
			std::string randomName(void);
};

#endif
