/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 18:17:26 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/15 09:12:52 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <iostream>


Fixed::Fixed() : _fixe(0), _fractionalbits(8) {
}

Fixed::Fixed(const int fixe) : _fractionalbits(8), _fixe(fixe << this->_fractionalbits)  {
}

Fixed::Fixed(const float fixe) : _fixe(fixe), _fractionalbits(8) {
	this->_fixe = static_cast<int>(fixe * (1 << this->_fractionalbits));
}

Fixed::Fixed(Fixed const &fixed) : _fractionalbits(8){
	*this = fixed;
}

Fixed::~Fixed() {
}

int			Fixed::getRawBits(void) const{
	return (this->_fixe);
}

void		Fixed::setRawBits(int const raw) {
	this->_fixe = raw;
}

float		Fixed::toFloat(void) const {
	return (static_cast<float>(this->_fixe) / (1 << this->_fractionalbits));
}

Fixed&		Fixed::min(Fixed lhs, Fixed rhs) const{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed&		Fixed::max(Fixed lhs, Fixed rhs) const{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

Fixed const&		Fixed::min(Fixed const& lhs, Fixed const& rhs) const{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed const&		Fixed::max(Fixed const& lhs, Fixed const& rhs) const{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

int			Fixed::toInt(void) const {
	return (this->_fixe >> _fractionalbits);
}

// Affectation =====================
Fixed & Fixed::operator=(Fixed const &rhs) {
	this->_fixe = rhs.getRawBits();
	return(*this);
}

Fixed Fixed::operator+(Fixed const &rhs) {
	Fixed newFixe = Fixed(this->getRawBits() + rhs.getRawBits());
	return newFixe;
}

Fixed Fixed::operator-(Fixed const &rhs) {
	Fixed newFixe = Fixed(this->getRawBits() - rhs.getRawBits());
	return newFixe;
}

Fixed Fixed::operator*(Fixed const &rhs) {
	Fixed    f;
	int        result;
	
	result = this->_fixe * rhs.getRawBits();
	result += 1 << (this->_fractionalbits - 1);
	result >>= this->_fractionalbits;
	f.setRawBits(result);
	return (f); 
}

Fixed Fixed::operator/(Fixed const &rhs) {
    Fixed    f;
    int        result;

    result = this->_fixe << _fractionalbits;
    result += this->_fixe / 2;
    result /= this->_fixe;

    f.setRawBits(result);
    return (f);
}

Fixed Fixed::operator++(int) {
		Fixed old = *this;
		*this = Fixed(this->getRawBits() + Fixed(1).getRawBits());
	return (old);
}

Fixed& Fixed::operator++() {
		*this = Fixed(this->getRawBits() + Fixed(1).getRawBits());
	return (*this);
}

// Comparaison =====================
bool Fixed::operator>(Fixed const &rhs) const{
	if (this->getRawBits() > rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<(Fixed const &rhs) const{
	if (this->getRawBits() < rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(Fixed const &rhs) const{
	if (this->getRawBits() >= rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(Fixed const &rhs) const{
	if (this->getRawBits() >= rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(Fixed const &rhs) const{
	if (this->getRawBits() == rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(Fixed const &rhs) const{
	if (this->getRawBits() != rhs.getRawBits())
		return true;
	return false;
}

std::ostream& operator<<(std::ostream& ofs, Fixed const &rhs) {
	ofs << rhs.toFloat();
	return (ofs);
}
