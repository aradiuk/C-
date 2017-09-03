//
// Created by andrew on 16.08.17.
//
#include <iostream>

#ifndef EX06_WEAPON_H
#define EX06_WEAPON_H


class Weapon
{
private:
	std::string type;

public:
	void					setType(std::string str);
	const	std::string&	getType();
	Weapon(std::string str = "");
	~Weapon();
};


#endif //EX06_WEAPON_H
