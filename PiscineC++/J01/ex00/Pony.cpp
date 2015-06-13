/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root </var/spool/mail/root>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 16:07:34 by root              #+#    #+#             */
/*   Updated: 2015/06/12 17:56:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Pony.hpp>

Pony::Pony(std::string name) : ponyName(name)
{
	std::cout << "On a achete un putain de poney qui s'appel : "
			<< name << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "suppression du poney nomme : " << this->ponyName << std::endl;
}
