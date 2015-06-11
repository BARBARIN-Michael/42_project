/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 17:22:49 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/11 11:36:10 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		Contact(void);

	public :
		std::string	get_firstname(std::string firstname);
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
