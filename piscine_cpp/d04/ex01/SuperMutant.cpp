//
// Created by andrew on 23.08.17.
//

#include "SuperMutant.h"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !\n";
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ...\n";
}

SuperMutant::SuperMutant(const SuperMutant &obj) : Enemy(obj)
{}

SuperMutant& SuperMutant::operator=(const SuperMutant &obj)
{
	Enemy::operator=(obj);
}

void SuperMutant::takeDamage(int amount)
{
	Enemy::takeDamage(amount - 3);
}