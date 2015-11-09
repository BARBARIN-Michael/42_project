/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 18:23:04 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/22 22:11:09 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <iostream>


static void luidansmonbureau(Bureaucrat& intel)
{
	bool		posneg = true;
	int			val = 0;

	while (1) {
		try {
				if (posneg == true)
				{
					intel.incGrade();
					std::cout << "\t" << intel << std::endl;
				}
				else
				{
					intel.decGrade();
					std::cout << "\t" << intel << std::endl;
				}
		}
		catch(Bureaucrat::GradeTooLowException& e)
		{
				std::cout << "\tLecture de l'erreur : <" << e.what() << ">" << std::endl;
				posneg = !posneg;
				if (val == 1)
					break ;
				else
				{
					val = 1;
					continue ;
				}
		}
		catch(Bureaucrat::GradeTooHightException& e)
		{
				std::cout << "\tLecture de l'erreur : <" << e.what() << ">" << std::endl;
				posneg = !posneg;
				if (val == 1)
					break ;
				else
				{
					val = 1;
					continue ;
				}
		}
	}
}

int			main(void)
{
	Bureaucrat totodansmonbureau("toto", 200);
	Bureaucrat titidansmonbureau("titi", 20);

	luidansmonbureau(totodansmonbureau);
	luidansmonbureau(titidansmonbureau);
	return (0);
}
