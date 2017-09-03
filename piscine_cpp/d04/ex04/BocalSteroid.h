//
// Created by andrew on 25.08.17.
//

#ifndef EX04_BOCALSTEROID_H
#define EX04_BOCALSTEROID_H

#include "IAsteroid.h"
#include "DeepCoreMiner.h"
#include "StripMiner.h"

class BocalSteroid : public IAsteroid
{
private:
	std::string	name;

public:
	BocalSteroid();
	~BocalSteroid();
	BocalSteroid(const BocalSteroid& obj);
	BocalSteroid& operator=(const BocalSteroid& obj);
	virtual std::string beMined(DeepCoreMiner* d) const;
	virtual std::string beMined(StripMiner* s) const;
	virtual std::string	getName() const;
};


#endif //EX04_BOCALSTEROID_H
