#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>

int main()
{
	Contact con = Contact();
	PhoneBook pb = PhoneBook();
	std::string mode;

	while(1)
	{
		getline (std::cin, mode);
		if (mode == "ADD")
		{
			if(pb.add())
				pb.incrementIndex();
		}
		else if (mode == "SEARCH" || (mode.substr(0, 6) == "SEARCH" && mode[6] == ' ' && mode[7] >= '1' && mode[7] <= '8' && mode[8] == '\0'))
		{
			if (mode == "SEARCH")
				pb.search();
			else
			{
				int index = mode[7] - '1';
				pb.search(index);
			}
		}
		else if (mode == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}
}