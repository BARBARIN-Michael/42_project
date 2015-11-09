/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 18:23:04 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/23 21:17:38 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <Intern.hpp>
#include <Form.hpp>
#include <iostream>


int			main(void)
{
	Intern intern;
	Form *form;
try
	{
		Bureaucrat	b0("Fromage de holland", 3);
		form = intern.makeForm("Presidential Pardon", "Bureau du president");
		std::cout << "\x1B[33m petit test : " << b0 << *form << "Fin du test\x1B[0m" << std::endl;
		form->beSigned(b0);
		form->exec(b0);
		std::cout << *form;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat	b0("Minus", 60);
		RobotomyRequestForm		f0("Un cerveau");
		std::cout << "\x1B[33m" << b0 << f0 << "\x1B[0m" << std::endl;
		f0.beSigned(b0);
		f0.exec(b0);
		std::cout << f0;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat	b0("bipbip", 40);
		ShrubberyCreationForm		f0("Au secours, NIIIIIII");
		std::cout << "\x1B[33m" << b0 << f0 << "\x1B[0m" << std::endl;
		f0.beSigned(b0);
		f0.exec(b0);
		std::cout << f0;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat	b0("Holland", 12);
		Bureaucrat	b1("sous-fifre Sarko", 46);
		Bureaucrat	b2("sous-fifre Pen", 3);
		PresidentialPardonForm		f0("Lorraine");
		std::cout << "\x1B[33m" << b0 << f0 << "\x1B[0m" << std::endl;
		f0.beSigned(b0);
		f0.exec(b2);
		f0.exec(b1);

		std::cout << f0;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat	b0("Coyote", 79);
		PresidentialPardonForm		f0("un poulet pour le diner");
		std::cout << "\x1B[33m" << b0 << f0 << "\x1B[0m" << std::endl;
		f0.beSigned(b0);
		f0.exec(b0);
		std::cout << f0;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
}
