//
// Created by andrew on 23.08.17.
//

#include "Victim.h"

Victim::Victim(std::string n) : name(n)
{
	std::cout << "Some random victim called " << name << " just popped !\n";
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason !\n";
}

Victim::Victim(const Victim &obj)
{
	name = obj.name;
	std::cout << "Some random victim called " << name << " just popped !\n";
}

Victim& Victim::operator=(const Victim &obj)
{
	this->name = obj.name;
	return (*this);
}

std::string	Victim::getName() const
{
	return (name);
}

void		Victim::setName(std::string n)
{
	name = n;
}

void		Victim::getPolymorphed() const
{
	std::cout << name << " has been turned into a cute little sheep !\n";
}

std::ostream& operator<<(std::ostream& os, const Victim& obj)
{
	os << "I'm " << obj.getName() << " and I like otters !\n";
	return (os);
}



