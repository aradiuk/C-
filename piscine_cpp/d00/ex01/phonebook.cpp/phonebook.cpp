//
// Created by andrew on 13.08.17.
//

#include "phonebook.h"

Phonebook::Phonebook() :
	contacts(0)
{
	std::cout << "Phonebook has been opened." << std::endl;
}

Phonebook::~Phonebook()
{
	std::cout << "Phonebook has been closed." << std::endl;
}

void		Phonebook::Instructions()
{
	std::cout << "\n\t\tWelcome to the fabulous PHONEBOOK!\n\n";
	std::cout << "Type 'ADD' to add a contact, type 'SEARCH' to find a contact";
	std::cout << ", type 'EXIT' to close phonebook.\n";
}

void		Phonebook::AddContact()
{
	std::string	input;

	if (contacts >= 8)
	{
		std::cout << "There are too many contacts already. Please exit the program and start again.\n";
		return ;
	}
	std::cout << "\nTo add a contact you must specify: first name, last name, nickname,\n"
			"login, postal address, email address, phone number, birthday date, favorite\n"
			"meal, underwear color and darkest secret.\n";
	phoneBook[contacts].SetFirstName();
	phoneBook[contacts].SetLastName();
	phoneBook[contacts].SetNickname();
	phoneBook[contacts].SetLogin();
	phoneBook[contacts].SetPostalAddress();
	phoneBook[contacts].SetEmailAddress();
	phoneBook[contacts].SetPhoneNumber();
	phoneBook[contacts].SetBirthdayDate();
	phoneBook[contacts].SetFavoriteMeal();
	phoneBook[contacts].SetUnderwearColor();
	phoneBook[contacts].SetDarkestSecret();
	contacts++;
	std::cout << "Contact has been successfully filled with your information!\n\n";
}

void		Phonebook::DisplaySearch()
{
	std::string temp;

	for (int i = 0; i < contacts; i++)
	{
		std::cout << "         " << i << "|";
		if (phoneBook[i].GetFirstName().length() < 10)
		{
			for (int j = 0; j < 10 - phoneBook[i].GetFirstName().length(); j++)
				std::cout << " ";
			std::cout << phoneBook[i].GetFirstName() << "|";
		}
		else
		{
			temp = phoneBook[i].GetFirstName().erase(9, std::string::npos);
			std::cout << temp << ".|";
		}
		if (phoneBook[i].GetLastName().length() < 10)
		{
			for (int j = 0; j < 10 - phoneBook[i].GetLastName().length(); j++)
				std::cout << " ";
			std::cout << phoneBook[i].GetLastName() << "|";
		}
		else
		{
			temp = phoneBook[i].GetLastName().erase(9, std::string::npos);
			std::cout << temp << ".|";
		}
		if (phoneBook[i].GetNickname().length() < 10)
		{
			for (int j = 0; j < 10 - phoneBook[i].GetNickname().length(); j++)
				std::cout << " ";
			std::cout << phoneBook[i].GetNickname() << "|";
		}
		else
		{
			temp = phoneBook[i].GetNickname().erase(9, std::string::npos);
			std::cout << temp << ".|";
		}
		std::cout << std::endl;
	}
}

void		Phonebook::DisplayContact(int index)
{
	while (index < 0 || index >= contacts)
	{
		std::cout << "Invalid input. Try again. (0-" << contacts - 1 << ")\n";
		std::cin >> index;
	}
	std::cout << "Displaying contact number " << index << ".";
	std::cout << "\n\tFirst name: " << phoneBook[index].GetFirstName();
	std::cout << "\n\tLast name: " << phoneBook[index].GetLastName();
	std::cout << "\n\tNickname: " << phoneBook[index].GetNickname();
	std::cout << "\n\tLogin: " << phoneBook[index].GetLogin();
	std::cout << "\n\tPostal address: " << phoneBook[index].GetPostalAddress();
	std::cout << "\n\tEmail address: " << phoneBook[index].GetEmailAddress();
	std::cout << "\n\tPhone number : " << phoneBook[index].GetPhoneNumber();
	std::cout << "\n\tBirthday date: " << phoneBook[index].GetBirthdayDate();
	std::cout << "\n\tFavorite meal: " << phoneBook[index].GetFavoriteMeal();
	std::cout << "\n\tUnderwear color: " << phoneBook[index].GetUnderwearColor();
	std::cout << "\n\tDarkest secret: " << phoneBook[index].GetDarkestSecret();
	std::cout << "\n";
}

int		Phonebook::GetContactsQuantity()
{
	return (contacts);
}