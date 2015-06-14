/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 11:34:31 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/13 15:00:00 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <Brain.hpp>

Brain::Brain() {
}

std::string	Brain::identify()
{
	std::stringstream ss;

	ss << std::hex << this;
	return (ss.str());
}
