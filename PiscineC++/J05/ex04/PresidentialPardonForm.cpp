/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 16:47:58 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/23 17:44:10 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>
#include <fstream>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() : _target("AnonymTarget"){
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5), _target(target){
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) : _target(rhs._target){
	
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	this->_target = rhs._target;
	return (*this);	
}

PresidentialPardonForm::~PresidentialPardonForm() {
	
}

void			PresidentialPardonForm::action() const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
