/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 16:47:58 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/23 17:47:40 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>
#include <fstream>
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : _target("AnonymTarget"){
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45), _target(target){
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs) : _target(rhs._target){
	
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	this->_target = rhs._target;
	return (*this);	
}

RobotomyRequestForm::~RobotomyRequestForm() {
	
}

void			RobotomyRequestForm::action() const
{
	std::cout << "some drilling noises" << std::endl;

	if (std::rand() % 2 == 0)
		std::cout << this->_target << " has been robotomized." << std::endl;
	else
		std::cout << this->_target << " has not been robotomoized." << std::endl;
}
