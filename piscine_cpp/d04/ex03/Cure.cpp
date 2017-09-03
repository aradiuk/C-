#include "Cure.h"

Cure::Cure() : AMateria("cure")
{}

Cure::~Cure()
{}

Cure::Cure(const Cure &obj) : AMateria(obj)
{}

Cure& Cure::operator=(const Cure &obj)
{
	AMateria::operator=(obj);
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
