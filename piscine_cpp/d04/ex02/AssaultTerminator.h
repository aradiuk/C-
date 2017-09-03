#ifndef EX02_ASSAULTTERMINATOR_H
#define EX02_ASSAULTTERMINATOR_H

#include "ISpaceMarine.h"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	~AssaultTerminator();
	AssaultTerminator(const AssaultTerminator& obj);
	AssaultTerminator& operator=(const AssaultTerminator& obj);

	virtual ISpaceMarine*	clone() const;
	virtual void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;
};


#endif //EX02_ASSAULTTERMINATOR_H
