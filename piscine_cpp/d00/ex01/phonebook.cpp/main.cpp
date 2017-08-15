#include <iostream>
#include "contact.h"
#include "phonebook.h"

int main()
{
	Phonebook	phonebook;
	std::string	choice;

	phonebook.Instructions();
	do
	{
		std::cout << "Please, make your choice: ";
		std::cin >> choice;
		if (choice == "EXIT")
			return (0);
		else if (choice == "ADD")
			phonebook.AddContact();
		else if (choice == "SEARCH")
		{
			if (phonebook.GetContactsQuantity())
			{
				int index;
				phonebook.DisplaySearch();
				std::cout << "Please, choose a desired contact by its index: ";
				std::cin >> index;
				phonebook.DisplayContact(index);
			}
			else
				std::cout << "The phonebook is empty. Please, add at least one contact.\n";
		}
	} while (choice != "EXIT" || choice != "ADD" || choice != "SEARCH");
	return 0;
}