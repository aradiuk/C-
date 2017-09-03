//
// Created by andrew on 15.08.17.
//
#include <iostream>

#ifndef EX02_ZOMBIEEVENT_H
#define EX02_ZOMBIEEVENT_H

#include "Zombie.h"

class ZombieEvent
{
public:
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	void	randomChump();

private:
	std::string	zombieType;
};


#endif //EX02_ZOMBIEEVENT_H
