#ifndef EX02_TACTICALMARINE_H
#define EX02_TACTICALMARINE_H

#include <iostream>
#include "ISpaceMarine.h"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	~TacticalMarine();
	TacticalMarine(const TacticalMarine& obj);
	TacticalMarine& operator=(const TacticalMarine& obj);

	virtual ISpaceMarine*	clone() const;
	virtual void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;
};


#endif //EX02_TACTICALMARINE_H
