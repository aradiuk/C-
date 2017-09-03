#ifndef EX01_SUPERMUTANT_H
#define EX01_SUPERMUTANT_H

#include "Enemy.h"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	~SuperMutant();
	SuperMutant(const SuperMutant& obj);
	SuperMutant& operator=(const SuperMutant& obj);
	virtual void	takeDamage(int amount);
};


#endif //EX01_SUPERMUTANT_H
