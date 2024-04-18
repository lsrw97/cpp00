# ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "./Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int 	index;
	public:
		PhoneBook();
		~PhoneBook();
		Contact* getContacts();
		int 	add();
		void 	search();
		void 	search(int index);
		int		getIndex();
		void	incrementIndex();
};

#endif