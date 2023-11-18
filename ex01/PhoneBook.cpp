#include "PhoneBook.hpp"

int	PhoneBook::add(void)
{
	std::string	str;

	std::cout << BLUE << std::endl << "            ---------- fill information ----------" << RESET << std::endl;
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << BLUE << "first name: " << RESET;
		std::getline(std::cin, str);
		if (std::cin.eof())
				return (1);
		else if (str != "")
		{
			this->_Contact[this->_index % 8].set_fname(str);
		}
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << BLUE << "last name: " << RESET;
		std::getline(std::cin, str);
		if (std::cin.eof())
				return (1);
		else if (str != "")
		{
			this->_Contact[this->_index % 8].set_lname(str);
		}
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << BLUE << "nickname: " << RESET;
		std::getline(std::cin, str);
		if (std::cin.eof())
				return (1);
		else if (str != "")
		{
			this->_Contact[this->_index % 8].set_nname(str);
		}
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << BLUE << "phone number: " << RESET;
		std::getline(std::cin, str);
		if (std::cin.eof())
				return (1);
		else if (str != "")
		{
			this->_Contact[this->_index % 8].set_phone(str);
		}
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << BLUE << "darkest secret: " << RESET;
		std::getline(std::cin, str);
		if (std::cin.eof())
				return (1);
		else if (str != "")
		{
			this->_Contact[this->_index % 8].set_secret(str);
		}
	}
	std::cout << std::endl;
	this->_index++;
	return (0);
}

int	PhoneBook::search(void)
{
	std::string str;

	if (search_page(this->_Contact))
		return (0);
	std::cout << BLUE << "Which user you are looking? " << RESET;
	while (1)
	{
		std::getline(std::cin, str);
		if (std::cin.eof())
				return (1);
		if (str.size() == 1 && str[0] > '0' && str[0] < '9')
		{
			std::cout << GREEN << "first name: " << this->_Contact[str[0] - '0' - 1].get_fname() << std::endl
							   << "last name: " << this->_Contact[str[0] - '0' - 1].get_lname() << std::endl
							   << "nickname: " << this->_Contact[str[0] - '0' - 1].get_nname() << std::endl
							   << "phone number: " << this->_Contact[str[0] - '0' - 1].get_phone() << std::endl
							   << "darkest secret: " << this->_Contact[str[0] - '0' - 1].get_secret() << std::endl << RESET;
			break;
		}
		std::cout << RED << "Error, please input as numbers between 1 - 8" << std::endl << RESET;
		std::cout << BLUE << "Which user you are looking? " << RESET;
	}
	return (0);
}