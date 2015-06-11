/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 18:47:04 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/11 11:36:10 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <contact.hpp>

static int			cmd_add(int nbr_contact)
{
	if (nb_contact >= 8)
	{
		cout << "Cannot save new contact" << std::endl;
		continue ;
	}
	Contact::Builder().set_firstname(getcin(bdd[0]))
						.set_lastname(getcin(bdd[1]))
						.set_nickname(getcin(bdd[2]))
						.set_login(getcin(bdd[3]))
						.set_postaladdr(getcin(bdd[4]))
						.set_emailaddr(getcin(bdd[5]))
						.set_phonenbr(getcin(bdd[6]))
						.set_birthdaydate(getcin(bdd[7]))
						.set_favoritemeal(getcin(bdd[8]))
						.set_underwearcol(getcin(bdd[9]))
						.set_darkestsecret(getcin(bdd[10]));
	return (nb_contact + 1);
}

static std::string	getcin(std::string str, bool integer)
{
	std::string result;
	int			iresult

	cout << str << " > ";
	cin >> result;
	return (result);
}

static void			cmd_search(Contact *lstContact)
{
	std::string		search[3];
	int				index;

	cout << "Index > ";
	cin >> index;
	cout << lstContact[index].
}

// index, first name, last name and nickname
int					main(void)
{
	Contact			contact[8];
	std::string		command;
	std::string		data[] = {"first name", "last name", "nick name", "login",
                              "postal address", "email address", "phone number",
                              "birthday date", "favorite meal",
							  "underwear color", "darkest secret"};
	std::string		bdd[11];
	int				nb_contact;

	nb_contact = 0;
	while (1)
	{
		command = getcin("prompt");
		if (command == "ADD")
			nbr_contact = cmd_add(nbr_contact);
		else if (command == SEARCH)
			
	}
	return (0);
}
