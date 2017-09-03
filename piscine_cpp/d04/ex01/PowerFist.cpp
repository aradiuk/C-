//
// Created by andrew on 23.08.17.
//

#include "PowerFist.h"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{}

PowerFist::~PowerFist()
{}

PowerFist::PowerFist(const PowerFist &obj) : AWeapon(obj)
{}

PowerFist& PowerFist::operator=(const PowerFist &obj)
{
	AWeapon::operator=(obj);
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *\n";
}