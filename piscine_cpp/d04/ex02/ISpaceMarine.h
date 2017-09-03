#ifndef EX02_ISPACEMARINE_H
#define EX02_ISPACEMARINE_H

#include <iostream>

class ISpaceMarine
{
public:
	virtual ~ISpaceMarine();
	virtual ISpaceMarine*	clone() const = 0;
	virtual void			battleCry() const = 0;
	virtual void			rangedAttack() const = 0;
	virtual void			meleeAttack() const = 0;
};


#endif //EX02_ISPACEMARINE_H
