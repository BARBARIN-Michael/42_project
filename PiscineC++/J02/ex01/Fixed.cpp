/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 18:17:26 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/14 22:16:03 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <iostream>


Fixed::Fixed() : _fixe(0), _fractional_bits(8) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fixe) : _fractional_bits(8), _fixe(fixe << this->_fractional_bits)  {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float fixe) : _fixe(fixe), _fractional_bits(8) {
	std::cout << "Default constructor called" << std::endl;
	this->_fixe = static_cast<int>(fixe * (1 << this->_fractional_bits));
}

Fixed::Fixed(Fixed const &fixed) : _fractional_bits(8){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed & Fixed::operator=(Fixed const &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixe = rhs.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int			Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixe);
}

void		Fixed::setRawBits(int const raw) {
	this->_fixe = raw;
}

float		Fixed::toFloat(void) const {
	return (static_cast<float>(this->_fixe) / (1 << this->_fractional_bits));
}

int			Fixed::toInt(void) const {
	return (this->_fixe >> _fractional_bits);
}

std::ostream& operator<<(std::ostream& ofs, Fixed const &rhs) {
	ofs << rhs.toFloat();
	return (ofs);
}
