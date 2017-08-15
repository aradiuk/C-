#include <iostream>

#ifndef PHONEBOOK_CPP_CONTACT_H
#define PHONEBOOK_CPP_CONTACT_H

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string login;
	std::string postalAddress;
	std::string emailAddress;
	std::string phoneNumber;
	std::string birthdayDate;
	std::string favoriteMeal;
	std::string underwearColor;
	std::string darkestSecret;

public:
	Contact();
	~Contact();
	std::string GetFirstName();
	std::string GetLastName();
	std::string GetNickname();
	std::string GetLogin();
	std::string GetPostalAddress();
	std::string GetEmailAddress();
	std::string GetPhoneNumber();
	std::string GetBirthdayDate();
	std::string GetFavoriteMeal();
	std::string GetUnderwearColor();
	std::string GetDarkestSecret();
	void SetFirstName();
	void SetLastName();
	void SetNickname();
	void SetLogin();
	void SetPostalAddress();
	void SetEmailAddress();
	void SetPhoneNumber();
	void SetBirthdayDate();
	void SetFavoriteMeal();
	void SetUnderwearColor();
	void SetDarkestSecret();
};


#endif //PHONEBOOK_CPP_CONTACT_H
