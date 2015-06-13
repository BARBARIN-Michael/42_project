/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 11:41:01 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/13 12:25:50 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
	
	private :
		std::string print_Brain(Brain *brain);
		int		_memory;
		int		_neurone;
		int		_qi;

	public :
		Brain();
		Brain(int memory, int neurone, int qi);
		void	identify();
};

#endif
