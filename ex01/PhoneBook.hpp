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