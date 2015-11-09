/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 15:25:58 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/23 23:22:44 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <Bureaucrat.hpp>
#include <Form.hpp>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHightException();
}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150) {
}

Bureaucrat::Bureaucrat(Bureaucrat const& rhs) : _name(rhs.getName()), _grade(rhs.getGrade()){
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs) {
	this->_grade = rhs.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat() {
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
	if (this->getGrade() >= Bureaucrat::_low)
		throw Bureaucrat::GradeTooLowException(this->getGrade());
	++this->_grade;
}

void			Bureaucrat::decGrade() {
	std::cout
		<< std::endl;
	if (this->getGrade() <= Bureaucrat::_hight)
		throw Bureaucrat::GradeTooHightException(this->getGrade());
	--this->_grade;
}


void			Bureaucrat::signForm(Form& form) {
	(void)form;
	return ;
}

/* *****************************************************
 * GradeTooLowException subclass
 * *****************************************************/

Bureaucrat::GradeTooLowException::GradeTooLowException() throw() : _gradeVal(0) {
}

Bureaucrat::GradeTooLowException::GradeTooLowException(int gradeVal) throw() : _gradeVal(gradeVal) {
}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const& rhs) throw() {
	(void)rhs;
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const& rhs) throw(){
	(void)rhs;
	return (*this);
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	std::string val;
	if (this->_gradeVal == 0)
	return (std::string("\x1B[31mError : Low Exception, value doesn't less 150\x1B[0m\n").c_str());
	else
	{
		std::ostringstream ofs;
		ofs << this->_gradeVal;;
		return (std::string("\x1B[31mImpossible number to reach : " + ofs.str()+ "\x1B[0m").c_str() );
	}
}

/* *****************************************************
 * GradeTooHightException subclass
 * *****************************************************/

Bureaucrat::GradeTooHightException::GradeTooHightException() throw() : _gradeVal (0){
}

Bureaucrat::GradeTooHightException::GradeTooHightException(int gradeVal) throw() : _gradeVal (gradeVal){
}

Bureaucrat::GradeTooHightException::GradeTooHightException(GradeTooHightException const& rhs) throw() {
	(void)rhs;
}

Bureaucrat::GradeTooHightException::~GradeTooHightException() throw(){
}

const char	*Bureaucrat::GradeTooHightException::what() const throw() {
	std::string val;
	if (this->_gradeVal == 0)
		return (std::string("\x1B[31mError : Hight Exception, value doesn't more th1an  1\n\x1B[0m").c_str());
	else
	{
		std::ostringstream ofs;
		ofs << this->_gradeVal;;
		return (std::string("\x1B[31mImpossible number to reach : " + ofs.str() + "\x1B[0m\n").c_str());
	}
}


/* *****************************************************
 * Operateur stream
 * *****************************************************/

std::ostream & operator<<(std::ostream& ofs, Bureaucrat const& rhs) {
	ofs <<  rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (ofs);
}

const int Bureaucrat::_hight = 1;
const int Bureaucrat::_low = 150;
