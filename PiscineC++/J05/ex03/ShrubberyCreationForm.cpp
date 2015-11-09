/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 16:47:58 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/23 17:29:44 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : _target("AnonymTarget"){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 10, 15), _target(target){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs) : _target(rhs._target){
	
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	this->_target = rhs._target;
	return (*this);	
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	
}

void			ShrubberyCreationForm::action() const
{
	std::ofstream o((this->_target + "_shrubbery").c_str());
	o << "ASCII trees" << std::endl;
}
