//
// Created by andrew on 16.08.17.
//
#include <iostream>

#ifndef EX06_HUMANA_H
#define EX06_HUMANA_H

#include "Weapon.h"

class HumanA
{
private:
	std::string name;
	Weapon		*weapon;

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void	attack();
};


#endif //EX06_HUMANA_H
