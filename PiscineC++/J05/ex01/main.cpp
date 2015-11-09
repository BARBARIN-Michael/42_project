/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 18:23:04 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/23 16:33:10 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <Form.hpp>
#include <iostream>


int			main(void)
{
try
	{
		Bureaucrat	b0("Cortex", 3);
		Form		f0("28c", 20);
		std::cout << "\x1B[33m" << b0 << f0 << "\x1B[0m" << std::endl;
		f0.beSigned(b0);
		std::cout << f0;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat	b0("Minus", 150);
		Form		f0("40t", 50);
		std::cout << "\x1B[33m" << b0 << f0 << "\x1B[0m" << std::endl;
		f0.beSigned(b0);
		std::cout << f0;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat	b0("bipbip", 40);
		Form		f0("70a", 40);
		std::cout << "\x1B[33m" << b0 << f0 << "\x1B[0m" << std::endl;
		f0.beSigned(b0);
		std::cout << f0;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat	b0("Coyote", 151);
		Form		f0("12b", 99);
		std::cout << "\x1B[33m" << b0 << f0 << "\x1B[0m" << std::endl;
		f0.beSigned(b0);
		std::cout << f0;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
}
