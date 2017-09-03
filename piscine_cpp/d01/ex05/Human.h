//
// Created by andrew on 16.08.17.
//

#ifndef EX05_HUMAN_H
#define EX05_HUMAN_H

#include "Brain.h"

class Human
{
	const Brain		brain;
public:
	const Brain&	getBrain() const;
	std::string		identify() const;
};


#endif //EX05_HUMAN_H
