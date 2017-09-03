#ifndef EX04_DEEPCOREMINER_H
#define EX04_DEEPCOREMINER_H

#include "IMiningLaser.h"
#include "IAsteroid.h"

class DeepCoreMiner : public IMiningLaser
{
public:
	DeepCoreMiner();
	~DeepCoreMiner();
	DeepCoreMiner(const DeepCoreMiner& obj);
	DeepCoreMiner& operator=(const DeepCoreMiner& obj);
	virtual void	mine(IAsteroid* a);
};


#endif //EX04_DEEPCOREMINER_H
