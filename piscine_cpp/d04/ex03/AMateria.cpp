#include "AMateria.h"

AMateria::AMateria(std::string const &t) : type(t), xp_(0)
{}

AMateria::~AMateria()
{}

AMateria::AMateria(const AMateria &obj)
{
	this->type = obj.type;
	this->xp_ = obj.xp_;
}

AMateria& AMateria::operator=(const AMateria &obj)
{
	this->type = obj.type;
	this->xp_ = obj.xp_;
	return (*this);
}

std::string const& AMateria::getType() const
{
	return (type);
}

unsigned int AMateria::getXP() const
{
	return (xp_);
}

void AMateria::use(ICharacter &target)
{
	xp_ += 10;
}