/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 10:24:36 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/13 10:38:29 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string strBrain = "HI THIS IS BRAIN";
	std::string *ptrBrain = &strBrain;
	std::string& refBrain = *ptrBrain;

	std::cout << "Lecture par pointeur : " << *ptrBrain << std::endl;
	std::cout << "Lecture par reference: " << refBrain << std::endl;
	return (0);
}
