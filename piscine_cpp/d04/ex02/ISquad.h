#ifndef EX02_ISQUAD_H
#define EX02_ISQUAD_H

#include <iostream>
#include "ISpaceMarine.h"

class ISquad
{
public:
	virtual ~ISquad();
	virtual int				getCount() const = 0;
	virtual ISpaceMarine*	getUnit(int n) const = 0;
	virtual int				push(ISpaceMarine* obj) = 0;
};


#endif //EX02_ISQUAD_H
