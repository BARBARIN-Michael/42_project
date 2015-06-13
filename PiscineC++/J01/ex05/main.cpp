/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 11:40:18 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/13 13:13:13 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Human.hpp>

int		main(void)
{
	//Human bocalien = Human();
	//bocalien.identify();
	//bocalien.getBrain().identify();
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}
