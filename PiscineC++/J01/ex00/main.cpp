/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root </var/spool/mail/root>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 16:29:13 by root              #+#    #+#             */
/*   Updated: 2015/06/12 18:00:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Pony.hpp>


static void ponyOnTheHeap(std::string name)
{
		Pony pony = Pony(name);
		return ;
}

static void ponyOnTheStack(std::string name)
{
		Pony *pony = new Pony(name);
		delete pony;
		return ;
}

int	main(void)
{
	ponyOnTheHeap("Medor");
	ponyOnTheStack("Rex");
}
