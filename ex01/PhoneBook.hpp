/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:11:37 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/18 13:11:39 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include"utils.hpp"

class PhoneBook{
	private:
		Contact	_Contact[8];
		int		_index;
	public:
		int		add(void);
		int		search(void);
};

#endif
