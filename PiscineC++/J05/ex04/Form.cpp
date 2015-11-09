/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 22:20:02 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/23 23:33:47 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>
#include <iostream>
#include <sstream>
#include <Bureaucrat.hpp>

Form::Form() : _name("Anonymous"), _grade(1){
}

Form::Form(std::string name, int grade, int gradeExec) : _name(name), _grade(grade), _gradeSign(false), _gradeExec(gradeExec){
	if (grade > 150)
		throw Form::GradeTooLowException();
	else if (grade < 1)
		throw Form::GradeTooHightException();
}

Form::Form(std::string name) : _name(name), _grade(150), _gradeExec(150){
}

Form::Form(Form const &rhs) : _name(rhs.getName()), _grade(rhs.getGrade()), _gradeSign(rhs._gradeSign), _gradeExec(120){
	if (rhs.getGrade() > 150)
		throw Form::GradeTooLowException();
	else if (rhs.getGrade() < 1)
		throw Form::GradeTooHightException();
}

Form & Form::operator=(Form const &rhs) {
	(void)rhs;
	return (*this);
}

Form::~Form() {
	
}

std::string		Form::getName() const{
	return (this->_name);
}

int				Form::getGrade() const{
	return (this->_grade);
}

bool			Form::getSigned() const {
	return (this->_gradeSign);
}

void			Form::beSigned(Bureaucrat const& b) {
	if (this->getSigned() == true)
		throw std::string("Form already signed\n");
	if (b.getGrade() <= this->_grade)
	{
		std::cout << b.getName() << " Signed the form" << std::endl;
		this->_gradeSign = true;
	}
	else
		throw Form::GradeTooLowException(b.getGrade(), b.getName());
}

void			Form::exec(Bureaucrat const& b) {
	if (b.getGrade() <= this->_gradeExec)
	{
		std::cout << b.getName() << " executes " << this->getName() << std::endl;
		action();
	}
	else
		throw GradeTooLowException(b.getGrade(), b.getName());
}

/* *****************************************************
 * GradeTooLowException subclass
 * *****************************************************/

Form::GradeTooLowException::GradeTooLowException() throw() : _gradeVal(0), _name("Anonymous") {
}

Form::GradeTooLowException::GradeTooLowException(int gradeVal, std::string name) throw() : _gradeVal(gradeVal), _name(name) {
}

Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const& rhs) throw() {
	(void)rhs;
}

Form::GradeTooLowException& Form::GradeTooLowException::operator=(Form::GradeTooLowException const& rhs) throw(){
	(void)rhs;
	return (*this);
}

Form::GradeTooLowException::~GradeTooLowException() throw() {
}

const char	*Form::GradeTooLowException::what() const throw() {
	std::string val;
	if (this->_gradeVal == 0 || this->_name == "Anonymous")
		return (std::string("Error : Low Exception, value doesn't less 150\n").c_str());
	else
	{
		std::ostringstream ofs;
		ofs << this->_gradeVal;;
		return (std::string(this->_name + " are too low sign this form\n").c_str());
	}
}

/* *****************************************************
 * GradeTooHightException subclass
 * *****************************************************/

Form::GradeTooHightException::GradeTooHightException() throw() : _gradeVal (0), _name("Anonymous"){
}

Form::GradeTooHightException::GradeTooHightException(int gradeVal, std::string name) throw() : _gradeVal (gradeVal), _name(name){
}

Form::GradeTooHightException::GradeTooHightException(GradeTooHightException const& rhs) throw() {
	(void)rhs;
}

Form::GradeTooHightException::~GradeTooHightException() throw(){
}

const char	*Form::GradeTooHightException::what() const throw() {
	std::string val;
	if (this->_gradeVal == 0 || this->_name == "Anonymous")
		return (std::string("Error : Hight Exception, value doesn't more 1\n").c_str());
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

std::ostream & operator<<(std::ostream& ofs, Form const& rhs) {
	if (rhs.getSigned() == true)
		ofs << "The form as been signed" << std::endl;
	else
		ofs << "The form cannot be signed" << std::endl;
	return (ofs);
}
