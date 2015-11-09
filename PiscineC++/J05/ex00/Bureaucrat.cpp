/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 15:25:58 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/22 22:10:10 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "creation du Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(1) {
	std::cout << "creation du Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& rhs) : _name(rhs.getName()), _grade(rhs.getGrade()){
	std::cout << "copie du Bureaucrat" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs) {
	this->_grade = rhs.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Suppression du Bureaucrat" << std::endl;
}

std::string		Bureaucrat::getName() const{
	return (this->_name);
}

int				Bureaucrat::getGrade() const{
	return (this->_grade);
}

void			Bureaucrat::incGrade() {
	std::cout
		<< std::endl;
	if (this->getGrade() >= Bureaucrat::_hight)
		throw Bureaucrat::GradeTooLowException(this->getGrade());
	++this->_grade;
}

void			Bureaucrat::decGrade() {
	std::cout
		<< std::endl;
	if (this->getGrade() <= Bureaucrat::_low)
		throw Bureaucrat::GradeTooHightException(this->getGrade());
	--this->_grade;
}

/* *****************************************************
 * GradeTooLowException subclass
 * *****************************************************/

Bureaucrat::GradeTooLowException::GradeTooLowException() throw() : _gradeVal(0) {
	std::cout << "Warning :: Grade Too Low for use !" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(int gradeVal) throw() : _gradeVal(gradeVal) {
	std::cout << "Warning :: Grade Too Low for use !" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const& rhs) throw() {
	std::cout << "Copie de l'exception !" << std::endl;
	(void)rhs;
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const& rhs) throw(){
	(void)rhs;
	return (*this);
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
	std::cout << "destruction de l'exception" << std::endl;
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	std::string val;
	if (this->_gradeVal == 0)
	return (std::string("Error : Low Exception, value doesn't less 1").c_str());
	else
	{
		std::ostringstream ofs;
		ofs << this->_gradeVal;;
		return (std::string("Impossible number to reach : " + ofs.str()).c_str());
	}
}

/* *****************************************************
 * GradeTooHightException subclass
 * *****************************************************/

Bureaucrat::GradeTooHightException::GradeTooHightException() throw() : _gradeVal (0){
	std::cout << "Warning :: Grade Too Hight for use !" << std::endl;
}

Bureaucrat::GradeTooHightException::GradeTooHightException(int gradeVal) throw() : _gradeVal (gradeVal){
	std::cout << "Warning :: Grade Too Hight for use !" << std::endl;
}

Bureaucrat::GradeTooHightException::GradeTooHightException(GradeTooHightException const& rhs) throw() {
	std::cout << "Copie de l'exception mais qui sert a rien !" << std::endl;
	(void)rhs;
}

Bureaucrat::GradeTooHightException::~GradeTooHightException() throw(){
	std::cout << "destruction de l'exception" << std::endl;
}

const char	*Bureaucrat::GradeTooHightException::what() const throw() {
	std::string val;
	if (this->_gradeVal == 0)
		return (std::string("Error : Hight Exception, value doesn't more than  150").c_str());
	else
	{
		std::ostringstream ofs;
		ofs << this->_gradeVal;;
		return (std::string("Impossible number to reach : " + ofs.str()).c_str());
	}
}


/* *****************************************************
 * Operateur stream
 * *****************************************************/

std::ostream & operator<<(std::ostream& ofs, Bureaucrat const& rhs) {
	ofs <<  rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (ofs);
}

const int Bureaucrat::_hight = 150;
const int Bureaucrat::_low = 1;
