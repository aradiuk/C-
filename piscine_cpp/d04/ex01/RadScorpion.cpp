//
// Created by andrew on 23.08.17.
//

#include "RadScorpion.h"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}

RadScorpion::RadScorpion(const RadScorpion &obj) : Enemy(obj)
{}

RadScorpion& RadScorpion::operator=(const RadScorpion &obj)
{
	Enemy::operator=(obj);
}

