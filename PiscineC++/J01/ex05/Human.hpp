/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 11:40:44 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/13 13:10:50 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include <Brain.hpp>

class Human {
	
	private :
		Brain	*_brain;

	public :
		Human();
		~Human();
		Brain&	getBrain();
		void	identify();
};

#endif
