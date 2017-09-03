//
// Created by andrew on 15.08.17.
//
#include <iostream>
#ifndef EX03_ZOMBIEHORDE_H
#define EX03_ZOMBIEHORDE_H

#include "Zombie.h"

class ZombieHorde
{
public:
	ZombieHorde(int N);
	~ZombieHorde();

private:
	Zombie* zombies;
	int 	number;
	void	randomChump(Zombie* zombie);
};


#endif //EX03_ZOMBIEHORDE_H
