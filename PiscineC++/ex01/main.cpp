/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 18:47:04 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/11 22:57:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <Phonebook.hpp>
#include <iostream>

static std::string	getcin(std::string str)
{
	std::string result;

	std::cout << str << " > ";
	std::cin >> result;
	return (result);
}

static Contact			cmd_add(std::string *bdd)
{
	return (Contact::Builder()
						.set_darkestsecret(getcin(bdd[10]))
						.set_underwearcol(getcin(bdd[9]))
						.set_favoritemeal(getcin(bdd[8]))
						.set_birthdaydate(getcin(bdd[7]))
						.set_phonenbr(getcin(bdd[6]))
						.set_emailaddr(getcin(bdd[5]))
						.set_postaladdr(getcin(bdd[4]))
						.set_login(getcin(bdd[3]))
						.set_nickname(getcin(bdd[2]))
						.set_lastname(getcin(bdd[1]))
						.set_firstname(getcin(bdd[0]))
						.build());
}

static void			cmd_search(Phonebook book)
{
	int			index;

	std::cout << "Index > ";
	std::cin >> index;
	book.print_contact(index);
}

// index, first name, last name and nickname
int					main(void)
{
	std::string		command;
	Phonebook		book;
	std::string		data[] = {"first name", "last name", "nick name", "login",
                              "postal address", "email address", "phone number",
                              "birthday date", "favorite meal",
							  "underwear color", "darkest secret"};
	while (std::cin)
	{
		command = getcin("prompt");
		if (command == "ADD")
		{
			try {
				book.add_phonebook(cmd_add(data));
			}
			catch (std::string const &str){
				std::cerr << "ERROR : " << str << std::endl;
			}
		}
		else if (command == "SEARCH")
			cmd_search(book);
	}
	return (0);
}
