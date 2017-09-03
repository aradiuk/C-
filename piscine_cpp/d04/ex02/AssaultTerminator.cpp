#include "AssaultTerminator.h"

AssaultTerminator::AssaultTerminator() : ISpaceMarine()
{
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ...\n";
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &obj)
{}

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator &obj)
{}

ISpaceMarine* AssaultTerminator::clone() const
{
	return (new AssaultTerminator());
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !\n";
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *\n";
}

