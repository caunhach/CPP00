#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	std::string	str;
	PhoneBook pb;

	while (std::cout << BLUE << ">> " << RESET)
	{
		std::getline(std::cin, str);
		if (str == "ADD")
		{
			if (pb.add())
			{
				std::cout << std::endl;
				return (0);
			}
		}
		else if (str == "SEARCH")
		{
			if (pb.search())
			{
				std::cout << std::endl;
				return (0);
			}
		}
		else if (str == "EXIT")
			return (0);
		else if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
		else
			std::cout << RED << "wrong input format. please use one of three commands : ADD, SEARCH, EXIT" << std::endl << RESET;
	}
	return (0);
}