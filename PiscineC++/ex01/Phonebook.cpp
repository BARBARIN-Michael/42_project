/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root </var/spool/mail/root>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/11 14:32:32 by root              #+#    #+#             */
/*   Updated: 2015/06/12 15:55:01 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Phonebook.hpp>

Phonebook::Phonebook() : nb_phonebook(0){
}

void Phonebook::add_phonebook(Contact contact)
{
	this->contact[nb_phonebook - 1] = contact;
}

void Phonebook::print_contact(int index)
{
		if (index > this->nb_phonebook)
				return ;
		std::cout 
				<< "Index : "
				<< index
				<< std::endl << "First Name : " 
				<< this->c_formate(this->contact[index].get_firstname())
				<< std::endl << "Last Name : " 
				<< this->c_formate(this->contact[index].get_lastname())
				<< std::endl << "Nick Name : " 
				<< this->c_formate(this->contact[index].get_nickname())
				<< std::endl;
}

void	Phonebook::error_nbContact(int nbcontact)
{
	if (this->nb_phonebook > nbcontact)
			throw std::string("Plus de place pour de nouveau contact!");
	else
		++this->nb_phonebook;
}

std::string	Phonebook::c_formate(std::string str)
{
	if (str.size() <= 10)
			return (str.resize(10, ' '), str);
	else
			return (str.substr(0, 9) + ".");
}
