//
// Created by andrew on 15.08.17.
//

#include "ZombieEvent.h"
#include <ctime>

void	ZombieEvent::setZombieType(std::string type)
{
	this->zombieType = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie* zombie = new Zombie(name);
	zombie->setType(zombieType);
	return (zombie);
}

void	ZombieEvent::randomChump()
{
	Zombie	zombie;

	std::srand(std::time(0));
	zombie.setName(zombie.names[rand() % 8]);
	zombie.announce();
}