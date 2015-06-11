/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 17:59:52 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/11 22:57:19 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <iostream>

Contact::Contact(	std::string	firstname,
					std::string	lastname,
					std::string	nickname,
					std::string	login,
					std::string	postaladdr,
					std::string	emailaddr,
					std::string	phonenbr,
					std::string	birthdaydate,
					std::string	favoritemeal,
					std::string	underwearcol,
					std::string	darkestsecret) :
					firstname(firstname),
					lastname(lastname),
					nickname(nickname),
					login(login),
					postaladdr(postaladdr),
					emailaddr(emailaddr),
					phonenbr(phonenbr),
					birthdaydate(birthdaydate),
					favoritemeal(favoritemeal),
					underwearcol(underwearcol),
					darkestsecret(darkestsecret){
}

Contact::Contact(){
}

Contact::Builder::Builder(){
}

Contact Contact::Builder::build() {
	return Contact(firstname,
                   lastname,
                   nickname,
                   login,
                   postaladdr,
                   emailaddr,
                   phonenbr,
                   birthdaydate,
                   favoritemeal,
                   underwearcol,
                   darkestsecret);
}

Contact::Builder&	Contact::Builder::set_firstname(std::string name) {
		if (name.size() > 10)
		{
				name[10] = '.';
				name.resize(10);
		}
		this->firstname = name;
		return *this;
}

std::string		Contact::get_firstname(void)
{
		return (this->firstname);
}

void			Contact::print_firstname(void)
{
		std::cout << Contact::get_firstname();
}

Contact::Builder& Contact::Builder::set_lastname(std::string name) {
		if (name.size() > 10)
		{
				name[10] = '.';
				name.resize(10);
		}
		this->lastname = name;
		return (*this);
}

std::string		Contact::get_lastname(void)
{
		return (this->lastname);
}

void			Contact::print_lastname(void)
{
		std::cout << Contact::get_lastname();
}

Contact::Builder& Contact::Builder::set_nickname(std::string name) {
		if (name.size() > 10)
		{
				name[10] = '.';
				name.resize(10);
		}
		this->nickname = name;
		return (*this);
}

std::string		Contact::get_nickname(void)
{
		return (this->nickname);
}

void			Contact::print_nickname(void)
{
		std::cout << Contact::get_nickname();
}

Contact::Builder& Contact::Builder::set_login(std::string name) {
		if (name.size() > 10)
		{
				name[10] = '.';
				name.resize(10);
		}
		this->login = name;
		return (*this);
}

std::string		Contact::get_login(void)
{
		return (this->login);
}

void			Contact::print_login(void)
{
		std::cout << Contact::get_login();
}

Contact::Builder& Contact::Builder::set_postaladdr(std::string name) {
		if (name.size() > 10)
		{
				name[10] = '.';
				name.resize(10);
		}
		this->postaladdr = name;
		return (*this);
}

std::string		Contact::get_postaladdr(void)
{
		return (this->postaladdr);
}

void			Contact::print_postaladdr(void)
{
		std::cout << Contact::get_postaladdr();
}

Contact::Builder& Contact::Builder::set_emailaddr(std::string name) {
		if (name.size() > 10)
		{
				name[10] = '.';
				name.resize(10);
		}
		this->emailaddr = name;
		return (*this);
}

std::string		Contact::get_emailaddr(void)
{
		return (this->emailaddr);
}

void			Contact::print_emailaddr(void)
{
		std::cout << Contact::get_emailaddr();
}

Contact::Builder& Contact::Builder::set_phonenbr(std::string name) {
		if (name.size() > 10)
		{
				name[10] = '.';
				name.resize(10);
		}
		this->phonenbr = name;
		return (*this);
}

std::string		Contact::get_phonenbr(void)
{
		return (this->phonenbr);
}

void			Contact::print_phonenbr(void)
{
		std::cout << Contact::get_phonenbr();
}

Contact::Builder& Contact::Builder::set_birthdaydate(std::string name) {
		if (name.size() > 10)
		{
				name[10] = '.';
				name.resize(10);
		}
		this->birthdaydate = name;
		return (*this);
}

std::string		Contact::get_birthdaydate(void)
{
		return (this->birthdaydate);
}

void			Contact::print_birthdaydate(void)
{
		std::cout << Contact::get_birthdaydate();
}

Contact::Builder& Contact::Builder::set_favoritemeal(std::string name) {
		if (name.size() > 10)
		{
				name[10] = '.';
				name.resize(10);
		}
		this->favoritemeal = name;
		return (*this);
}

std::string		Contact::get_favoritemeal(void)
{
		return (this->favoritemeal);
}

void			Contact::print_favoritemeal(void)
{
		std::cout << Contact::get_favoritemeal();
}

Contact::Builder& Contact::Builder::set_underwearcol(std::string name) {
		if (name.size() > 10)
		{
				name[10] = '.';
				name.resize(10);
		}
		this->underwearcol = name;
		return (*this);
}

std::string		Contact::get_underwearcol(void)
{
		return (this->underwearcol);
}

void			Contact::print_underwearcol(void)
{
		std::cout << Contact::get_underwearcol();
}

Contact::Builder& Contact::Builder::set_darkestsecret(std::string name) {
		if (name.size() > 10)
		{
				name[10] = '.';
				name.resize(10);
		}
		this->darkestsecret = name;
		return (*this);
}

std::string		Contact::get_darkestsecret(void)
{
		return (this->darkestsecret);
}

void			Contact::print_darkestsecret(void)
{
		std::cout << Contact::get_darkestsecret();
}
