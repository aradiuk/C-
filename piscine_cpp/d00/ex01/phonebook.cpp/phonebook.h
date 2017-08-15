//
// Created by andrew on 13.08.17.
//

#include <iostream>
#ifndef PHONEBOOK_CPP_PHONEBOOK_H
#define PHONEBOOK_CPP_PHONEBOOK_H

#include "contact.h"

class Phonebook
{
private:
	Contact	phoneBook[8];
	int		contacts;

public:
	Phonebook();
	~Phonebook();
	void	Instructions();
	void	AddContact();
	void	DisplaySearch();
	void	DisplayContact(int index);
	int		GetContactsQuantity();
};


#endif //PHONEBOOK_CPP_PHONEBOOK_H
