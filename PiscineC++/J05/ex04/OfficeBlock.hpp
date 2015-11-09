/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla <robinlambertz+dev@gmail.c>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 16:01:13 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/23 22:49:37 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

#include "Intern.hpp"
#include "Bureaucrat.hpp"

class OfficeBlock
{
	private :
		Intern *_intern;
		Bureaucrat *_bSigned;
		Bureaucrat *_bExec;
		OfficeBlock();
		OfficeBlock(OfficeBlock const & src);

		OfficeBlock		&operator=(OfficeBlock const &rhs);

public:
	OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor);
	virtual ~OfficeBlock();

	void setIntern(Intern *interne);
	void setSigner(Bureaucrat *bSigned);
	void setExecutor(Bureaucrat *bExec);
	void doBureaucracy(std::string name, std::string target);
};

#endif
