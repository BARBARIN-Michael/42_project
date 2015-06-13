/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root </var/spool/mail/root>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 18:01:36 by root              #+#    #+#             */
/*   Updated: 2015/06/12 18:02:39 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void		memoryLeak()
{
		std::string*        panthere = new std::string("String panthere");
		std::cout << *panthere << std::endl;
		delete panthere;
}
