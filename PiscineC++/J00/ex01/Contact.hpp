/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 17:22:49 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/11 22:14:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {
	private :
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	login;
		std::string	postaladdr;
		std::string	emailaddr;
		std::string	phonenbr;
		std::string	birthdaydate;
		std::string	favoritemeal;
		std::string	underwearcol;
		std::string	darkestsecret;
		Contact(std::string	firstname,
                std::string	lastname,
                std::string	nickname,
                std::string	login,
                std::string	postaladdr,
                std::string	emailaddr,
                std::string	phonenbr,
                std::string	birthdaydate,
                std::string	favoritemeal,
                std::string	underwearcol,
                std::string	darkestsecret);

	public :
		class Builder;
		Contact();
		std::string		get_firstname(void);
		std::string		get_lastname(void);
		std::string		get_nickname(void);
		std::string		get_login(void);
		std::string		get_postaladdr(void);
		std::string		get_emailaddr(void);
		std::string		get_phonenbr(void);
		std::string		get_birthdaydate(void);
		std::string		get_favoritemeal(void);
		std::string		get_underwearcol(void);
		std::string		get_darkestsecret(void);

		void			print_firstname(void);
		void			print_lastname(void);
		void			print_nickname(void);
		void			print_login(void);
		void			print_postaladdr(void);
		void			print_emailaddr(void);
		void			print_phonenbr(void);
		void			print_birthdaydate(void);
		void			print_favoritemeal(void);
		void			print_underwearcol(void);
		void			print_darkestsecret(void);
};

class Contact::Builder {

	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	login;
		std::string	postaladdr;
		std::string	emailaddr;
		std::string	phonenbr;
		std::string	birthdaydate;
		std::string	favoritemeal;
		std::string	underwearcol;
		std::string	darkestsecret;

	public:
		Builder();

		Builder&	set_firstname(std::string firstname);
		Builder&	set_lastname(std::string lastname);
		Builder&	set_nickname(std::string nickname);
		Builder&	set_login(std::string login);
		Builder&	set_postaladdr(std::string postaladdr);
		Builder&	set_emailaddr(std::string emailaddr);
		Builder&	set_phonenbr(std::string phonenbr);
		Builder&	set_birthdaydate(std::string birthdaydate);
		Builder&	set_favoritemeal(std::string favoritemeal);
		Builder&	set_underwearcol(std::string underwearcol);
		Builder&	set_darkestsecret(std::string darkestsecret);
		Contact			build();
};

#endif
