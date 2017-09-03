#ifndef EX04_IASTEROID_H
#define EX04_IASTEROID_H

#include <iostream>
#include "DeepCoreMiner.h"
#include "StripMiner.h"
//#include "IMiningLaser.h"

class	DeepCoreMiner;
class	StripMiner;

class IAsteroid
{
public:
	IAsteroid();
	virtual ~IAsteroid();
	IAsteroid(const IAsteroid& obj);
	IAsteroid& operator=(const IAsteroid& obj);
	virtual std::string	beMined(DeepCoreMiner* m) const = 0;
	virtual std::string	beMined(StripMiner* m) const = 0;
	virtual std::string	getName() const = 0;
};


#endif //EX04_IASTEROID_H
