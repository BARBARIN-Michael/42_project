/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 19:02:25 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/23 21:11:05 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>


Intern::Intern() {
}

Intern::Intern(Intern const &rhs) {
	(void) rhs;
}

Intern & Intern::operator=(Intern const &rhs) {
	(void) rhs;
	return (*this);
}

Intern::~Intern() {
	
}

Form	*Intern::makeForm(std::string funct, std::string name) {
	if (funct == "Presidential Pardon")
		return (new PresidentialPardonForm(name));
	else if (funct == "Robotomy Request")
		return (new RobotomyRequestForm(name));
	else if (funct == "Shrubbery Creation")
		return (new ShrubberyCreationForm(name));
	else
		throw std::string("Function cannot exist!");
}
