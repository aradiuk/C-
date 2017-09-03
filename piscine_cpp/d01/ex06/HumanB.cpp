//
// Created by andrew on 16.08.17.
//

#include "HumanB.h"

HumanB::HumanB(std::string n) : name(n)
{}

HumanB::~HumanB()
{}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon->setType(weapon.getType());
}