/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 11:40:32 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/13 13:16:29 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Human.hpp>
#include <Brain.hpp>

Human::Human()
{
	this->_Brain = new Brain();
}

Human::~Human()
{
	delete this->_brain;
}

void		Human::identify()
{
	this->_brain->identify();
}

Brain&		Human::getBrain()
{
	return (*this->_brain);
}
