/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:10:59 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/18 13:11:01 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

#include <iostream>
#include <string>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class	Contact{
	private:
		std::string	_fname;
		std::string	_lname;
		std::string	_nname;
		std::string	_phone;
		std::string	_secret;
	public:
		void			set_fname(std::string str);
		void			set_lname(std::string str);
		void			set_nname(std::string str);
		void			set_phone(std::string str);
		void			set_secret(std::string str);
		std::string		get_fname(void);
		std::string		get_lname(void);
		std::string		get_nname(void);
		std::string		get_phone(void);
		std::string		get_secret(void);
};

#endif
