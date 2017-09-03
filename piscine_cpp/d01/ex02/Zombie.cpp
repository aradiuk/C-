//
// Created by andrew on 15.08.17.
//

#include "Zombie.h"

Zombie::Zombie(std::string name)
{
	this->name = name;
	this->type = "Zombie";
	this->roar = "Braaaains";
	std::cout << "A " << "<" << getName() << " (" << getType();
	std::cout << ")> " <<  "was created!\n";
}

Zombie::~Zombie()
{
	std::cout << "A " << "<" << getName() << " (" << getType();
	std::cout << ")> " <<  "has been destroyed!\n";
}

void	Zombie::announce()
{
	std::cout << "<" << getName() << " (" << getType() << ")> " << getRoar();
	std::cout << std::endl;
}

void	Zombie::setName(std::string n)
{
	name = n;
}

void	Zombie::setType(std::string t)
{
	type = t;
}

void	Zombie::setRoar(std::string r)
{
	roar = r;
}

std::string	Zombie::getName()
{
	return (name);
}

std::string	Zombie::getType()
{
	return (type);
}

std::string	Zombie::getRoar()
{
	return (roar);
}

