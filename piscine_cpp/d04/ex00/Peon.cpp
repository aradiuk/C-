#include "Peon.h"

Peon::Peon(std::string n) : Victim(n)
{
	std::cout << "Zog zog\n";
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

Peon::Peon(const Peon &obj) : Victim(obj)
{
	std::cout << "Zog zog\n";
}

Peon& Peon::operator=(const Peon &obj)
{
	setName(obj.getName());
	return (*this);
}

void	Peon::getPolymorphed() const
{
	std::cout << getName() << " has been turned into a pink pony !\n";
}