//
// Created by andrew on 13.08.17.
//

#include "contact.h"

Contact::Contact()
{}

Contact::~Contact()
{}

std::string Contact::GetFirstName()
{
	return (firstName);
}

std::string Contact::GetLastName()
{
	return (lastName);
}

std::string Contact::GetNickname()
{
	return (nickname);
}

std::string Contact::GetLogin()
{
	return (login);
}

std::string Contact::GetPostalAddress()
{
	return (postalAddress);
}

std::string Contact::GetEmailAddress()
{
	return (emailAddress);
}
std::string Contact::GetPhoneNumber()
{
	return (phoneNumber);
}

std::string Contact::GetBirthdayDate()
{
	return (birthdayDate);
}
std::string Contact::GetFavoriteMeal()
{
	return (birthdayDate);
}

std::string Contact::GetUnderwearColor()
{
	return (underwearColor);
}

std::string Contact::GetDarkestSecret()
{
	return (darkestSecret);
}

void		Contact::SetFirstName()
{
	std::cout << "Type your firstname: ";
	std::cin >> firstName;
}

void		Contact::SetLastName()
{
	std::cout << "Type your lastname: ";
	std::cin >> lastName;
}

void		Contact::SetNickname()
{
	std::cout << "Type your nickname: ";
	std::cin >> nickname;
}

void		Contact::SetLogin()
{
	std::cout << "Type your login: ";
	std::cin >> login;}

void		Contact::SetPostalAddress()
{
	std::cout << "Type your postal address: ";
	std::cin >> postalAddress;
}

void		Contact::SetEmailAddress()
{
	std::cout << "Type your email address: ";
	std::cin >> emailAddress;
}

void		Contact::SetPhoneNumber()
{
	std::cout << "Type your phone number: ";
	std::cin >> phoneNumber;
}

void		Contact::SetBirthdayDate()
{
	std::cout << "Type your birthday date: ";
	std::cin >> birthdayDate;
}

void		Contact::SetFavoriteMeal()
{
	std::cout << "Type your favorite meal: ";
	std::cin >> favoriteMeal;
}

void		Contact::SetUnderwearColor()
{
	std::cout << "Type your underwear color: ";
	std::cin >> underwearColor;}

void		Contact::SetDarkestSecret()
{
	std::cout << "Type your darkest secret: ";
	std::cin >> darkestSecret;
}