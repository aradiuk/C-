//
// Created by andrew on 23.08.17.
//

#include "PlasmaRifle.h"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::~PlasmaRifle()
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &obj) :
		AWeapon(obj)
{}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle &obj)
{
	AWeapon::operator=(obj);
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}

