/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 17:05:18 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/14 17:19:14 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Human.hpp>

int		main(void)
{
	Human toto = Human("toto");

	toto.action("melee", "titi");
	toto.action("ranged", "titi");
	toto.action("shout", "titi");
	toto.action("battle", "titi");
	return (0);
}
