//
// Created by andrew on 16.08.17.
//

#include "Human.h"

const Brain& Human::getBrain() const
{
	return (brain);
}

std::string	Human::identify() const
{
	return (brain.identify());
}