#ifndef EX04_MININGBARGE_H
#define EX04_MININGBARGE_H

#include <iostream>
#include "IMiningLaser.h"

class MiningBarge
{
private:
	IMiningLaser*	lasers[4] = {0};

public:
	MiningBarge();
	~MiningBarge();
	MiningBarge(const MiningBarge& obj);
	MiningBarge& operator=(const MiningBarge& obj);
	void	equip(IMiningLaser* l);
	void	mine(IAsteroid* a) const;
};


#endif //EX04_MININGBARGE_H
