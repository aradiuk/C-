//
// Created by andrew on 16.08.17.
//

#include "Brain.h"
#include <sstream>

Brain::Brain() : iq(155)
{}

std::string Brain::identify() const
{
	std::stringstream ss;
	ss << this;
	return (ss.str());
}