/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:12:04 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/18 13:12:08 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include "Contact.hpp"

std::string text_inf(std::string inf)
{
	std::string str = "";

	if (inf.size() <= 10)
		return inf;
	for (int i = 0; i < 9; i++)
		str.push_back(inf[i]);
	str.push_back('.');
	return str;
}

std::string spaces(int size)
{
	if (size <= 10)
		return (std::string(10 - size, ' '));
	else
		return ("");
}

int	search_page(Contact	_Contact[8])
{
	std::cout << GREEN << " ___________________________________________ " << std::endl << RESET;
	std::cout << GREEN << "|     index|first name| last name|  nickname|" << std::endl << RESET;
	std::cout << GREEN << "|__________|__________|__________|__________|" << std::endl << RESET;
	for (int i = 0; i < 8 && _Contact[i].get_fname().size(); i++)
	{
		std::string fname = _Contact[i].get_fname();
		int	size_fname = _Contact[i].get_fname().size();
		std::string lname = _Contact[i].get_lname();
		int	size_lname = _Contact[i].get_lname().size();
		std::string nname = _Contact[i].get_nname();
		int	size_nname = _Contact[i].get_nname().size();
		std::cout << GREEN << "|" << spaces(1) << std::to_string(i + 1)
						  << "|" << spaces(size_fname) << text_inf(_Contact[i].get_fname())
						  << "|" << spaces(size_lname) << text_inf(_Contact[i].get_lname())
						  << "|" << spaces(size_nname) << text_inf(_Contact[i].get_nname())
						  << "|" << std::endl << RESET;
		std::cout << GREEN << "|__________|__________|__________|__________|" << std::endl << RESET;
	}
	if (_Contact[0].get_fname().size() == 0)
	{
		std::cout << RED << std::endl << "Empty information" << std::endl << RESET;
		return (1);
	}
	return (0);
}
