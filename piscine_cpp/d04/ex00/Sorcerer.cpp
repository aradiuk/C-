#include "Sorcerer.h"

Sorcerer::Sorcerer(std::string const &n, std::string const &t) :
	name(n), title(t)
{
	std::cout << name << ", " << title << ", is born !\n";
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. ";
	std::cout << "Consequences will never be the same !\n";
}

Sorcerer::Sorcerer(const Sorcerer &obj)
{
	this->name = obj.name;
	this->title = obj.title;
	std::cout << name << ", " << title << ", is born !\n";
}

Sorcerer& Sorcerer::operator=(const Sorcerer &obj)
{
	this->name = obj.name;
	this->title = obj.title;

	return (*this);
}

std::string Sorcerer::getName() const
{
	return (name);
}

std::string Sorcerer::getTitle() const
{
	return (title);
}

void		Sorcerer::polymorh(Victim const &obj) const
{
	obj.getPolymorphed();
}

std::ostream& operator<<(std::ostream& os, const Sorcerer& obj)
{
	os << "I am " << obj.getName() << ", " << obj.getTitle() << ", ";
	os << "and I like ponies !\n";
	return (os);
}
