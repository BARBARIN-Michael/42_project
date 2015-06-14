/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 11:40:32 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/13 15:00:19 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Human.hpp>
#include <Brain.hpp>

Human::Human() : _brain()
{
}

std::string	Human::identify()
{
	return (this->_brain.identify());
}

Brain&		Human::getBrain()
{
	return (this->_brain);
}
