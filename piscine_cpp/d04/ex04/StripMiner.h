#ifndef EX04_STRIPMINER_H
#define EX04_STRIPMINER_H

#include "IMiningLaser.h"
#include "IAsteroid.h"

class StripMiner : public IMiningLaser
{
public:
	StripMiner();
	~StripMiner();
	StripMiner(const StripMiner& obj);
	StripMiner& operator=(const StripMiner& obj);
	virtual void	mine(IAsteroid* a);
};


#endif //EX04_STRIPMINER_H
