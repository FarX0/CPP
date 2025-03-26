
#include "PhoneBook.hpp"

bool	is_numeric(const std::string& str)
{
	for (char c : str)
	{
		if (!std::isdigit(c))
			return false;
	}
	return true;
}

int main()
{
	PhoneBook	phoneBook;
	std::string	input;
	while (true)
	{
		std::cout << "PhoneBook" << std::endl;
		std::getline(std::cin, input);
		if (input == "EXIT")
			break;
		else if (input == "ADD")
		{
			std::string	data[5];
			std::cout << "Enter first name: ";
			std::getline(std::cin, data[0]);
			std::cout << "Enter last name: ";
			std::getline(std::cin, data[1]);
			std::cout << "Enter nickname: ";
			std::getline(std::cin, data[2]);
			std::cout << "Enter phone number: ";
			std::getline(std::cin, data[3]);
			if (data[3].length() < 10 || data[3].length() > 15 || !is_numeric(data[3]))
			{
				std::cout << "Invalid phone number" << std::endl;
				continue;
			}
			std::cout << "Enter darkest secret: ";
			std::getline(std::cin, data[4]);
			phoneBook.add_contact(data);
		}
		else if (input == "LIST")
			phoneBook.display_phonebook();
		else if (input == "SEARCH")
			phoneBook.display_contact(0);
		else if (input == "SEARCH")
			searchContact();
		else
			std::cout << "Invalid command" << std::endl;
	}
}

