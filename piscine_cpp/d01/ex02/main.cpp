#include <iostream>
#include "Zombie.h"
#include "ZombieEvent.h"

int main()
{
	Zombie	zomb1;
	Zombie	zomb2("HUULK");
	Zombie*	zomb3;
	ZombieEvent	zombEvent;

	zombEvent.setZombieType("HUNTER");
	zomb3 = zombEvent.newZombie("Andrew");
	zomb1.announce();
	zomb2.announce();
	zomb3->announce();
	zombEvent.randomChump();
	return 0;
}