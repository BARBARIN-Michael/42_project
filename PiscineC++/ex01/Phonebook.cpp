/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root </var/spool/mail/root>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/11 14:32:32 by root              #+#    #+#             */
/*   Updated: 2015/06/11 22:18:41 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Phonebook.hpp>

Phonebook::Phonebook() : nb_phonebook(0){
}

void Phonebook::add_phonebook(Contact contact)
{
		if (this->nb_phonebook <= 8)
		{
			++nb_phonebook;
			this->contact[nb_phonebook] = contact;
		}
		else
			throw std::string("Seulement 8 contacts autorise!");
}

void Phonebook::print_contact(int index)
{
		std::cout << this->contact[index].get_firstname();
}
