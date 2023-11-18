/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:10:22 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/18 13:10:26 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (int i = 1; i < argc; i++) {
			for (int j = 0; argv[i][j]; j++)
				std::cout << (char)std::toupper(argv[i][j]);
		}
	}
	std::cout << std::endl;
}
