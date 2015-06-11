/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 17:59:52 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/11 11:36:09 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <contact.hpp>

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
					firstname(firstname)
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

Contact::Builder::build() {
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

ContactBuilder&	set_firstname(std::string firstname) {
	if (firstname.size() > 10)
	{
		firstname.c_str()[10] = '.';
		firstname.resize(10);
	}
	this->firstname = firstname;
	return (this);
}

ContactBuilder&	set_lastname(std::string lastname) {
	if (lastname.size() > 10)
	{
		lastname.c_str()[10] = '.';
		lastname.resize(10);
	}
	this->lastname = lastname;
	return (this);
}

ContactBuilder&	set_nickname(std::string nickname) {
	if (nickname.size() > 10)
	{
		nickname.c_str()[10] = '.';
		nickname.resize(10);
	}
	this->nickname = nickname;
	return (this);
}

ContactBuilder&	set_login(std::string login) {
	if (.size() > 10)
	{
		firstname.c_str()[10] = '.';
		firstname.resize(10);
	}
	this->login = login;
	return (this);
}

ContactBuilder&	set_postaladdr(std::string postaladdr) {
	if (firstname.size() > 10)
	{
		firstname.c_str()[10] = '.';
		firstname.resize(10);
	}
	this->posaladdr = postaladdr;
	return (this);
}

ContactBuilder&	set_emailaddr(std::string emailaddr) {
	if (firstname.size() > 10)
	{
		firstname.c_str()[10] = '.';
		firstname.resize(10);
	}
	this->emailaddr = enailaddr;
	return (this);
}

ContactBuilder&	set_phonenbr(std::string phonenbr) {
	if (firstname.size() > 10)
	{
		firstname.c_str()[10] = '.';
		firstname.resize(10);
	}
	this->phonenbr = phonenbr;
	return (this);
}

ContactBuilder&	set_birthdaydate(std::string birthdaydate) {
	if (firstname.size() > 10)
	{
		firstname.c_str()[10] = '.';
		firstname.resize(10);
	}
	this->birthdaydate = birthdaydate;
	return (this);
}

ContactBuilder&	set_favoritemeal(std::string favoritemeal) {
	if (firstname.size() > 10)
	{
		firstname.c_str()[10] = '.';
		firstname.resize(10);
	}
	this->favoritemeal = favoritemeal;
	return (this);
}

ContactBuilder&	set_underwearcol(std::string underwearcol) {
	if (firstname.size() > 10)
	{
		firstname.c_str()[10] = '.';
		firstname.resize(10);
	}
	this->underwearcol = underwearcol;
	return (this);
}

ContactBuilder&	set_darkestsecret(std::string darkestsecret) {
	if (firstname.size() > 10)
	{
		firstname.c_str()[10] = '.';
		firstname.resize(10);
	}
	this->darksecret = darksecret;
	return (this);
}

std::string		get_firstname(std::string firstname)
{

}
std::string	get_lastname(std::string lastname);
std::string	get_nickname(std::string nickname);
std::string	get_login(std::string login);
std::string	get_postaladdr(std::string postaladdr);
std::string	get_emailaddr(std::string emailaddr);
std::string	get_phonenbr(std::string phonenbr);
std::string	get_birthdaydate(std::string birthdaydate);
std::string	get_favoritemeal(std::string favoritemeal);
std::string	get_underwearcol(std::string underwearcol);
std::string	get_darkestsecret(std::string darkestsecret);
