/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 11:34:31 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/13 13:01:10 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain(int memory, int neurone, int qi) : _memory(memory), 
												_neurone(neurone),
												_qi(qi){
}

Brain::Brain() {
}

void	Brain::identify()
{
	std::cout << "Brains number : " << this << std::endl;
}
