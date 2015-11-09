/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 21:29:29 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/23 22:40:30 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *bSigned, Bureaucrat *bExec) :
	_intern(intern), _bSigned(bSigned), _bExec(bExec)
{

}

OfficeBlock::~OfficeBlock()
{
}

void	OfficeBlock::setIntern(Intern *intern)
{
	this->_intern = intern;
}

void	OfficeBlock::setSigner(Bureaucrat *bsigned)
{
	this->_bSigned = bsigned;
}


void	OfficeBlock::setExecutor(Bureaucrat *bexec)
{
	this->_bExec = bexec;
}

void	OfficeBlock::doBureaucracy(std::string name, std::string target)
{
	if ( this->_bSigned == NULL || this->_bExec == NULL || this->_intern == NULL)
		return;
	Form *f = this->_intern->makeForm(name, target);
	this->_bSigned->signForm(*f);
	this->_bExec->exec(*f);
}
