/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root </var/spool/mail/root>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/11 14:36:43 by root              #+#    #+#             */
/*   Updated: 2015/06/12 15:55:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <Contact.hpp>

class Phonebook {

		private :
				Contact contact[8];
				int		nb_phonebook;

		public :
				Phonebook();
				void add_phonebook(Contact contact);
				void print_contact(int index);
				void error_nbContact(int nbContact);
				std::string c_formate(std::string str);
};

#endif
