//
// Created by andrew on 16.08.17.
//
#include <iostream>
#ifndef EX06_HUMANB_H
#define EX06_HUMANB_H

#include "Weapon.h"
class HumanB
{
private:
	std::string name;
	Weapon*		weapon;

public:
	HumanB(std::string name);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon& weapon);
};


#endif //EX06_HUMANB_H
