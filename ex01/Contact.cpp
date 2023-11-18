/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:10:51 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/18 13:10:53 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void		Contact::set_fname(std::string str)
{
	this->_fname = str;
}

void		Contact::set_lname(std::string str)
{
	this->_lname = str;
}

void		Contact::set_nname(std::string str)
{
	this->_nname = str;
}

void		Contact::set_phone(std::string str)
{
	this->_phone = str;
}

void		Contact::set_secret(std::string secret)
{
	this->_secret = secret;
}

std::string	Contact::get_fname(void)
{
	return (this->_fname);
}

std::string	Contact::get_lname(void)
{
	return (this->_lname);
}

std::string	Contact::get_nname(void)
{
	return (this->_nname);
}

std::string	Contact::get_phone(void)
{
	return (this->_phone);
}

std::string	Contact::get_secret(void)
{
	return (this->_secret);
}
