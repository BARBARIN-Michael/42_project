/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root </var/spool/mail/root>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/11 14:36:43 by root              #+#    #+#             */
/*   Updated: 2015/06/11 22:15:59 by root             ###   ########.fr       */
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
};

#endif
