//
// Created by andrew on 25.08.17.
//

#ifndef EX04_ASTEROBOCAL_H
#define EX04_ASTEROBOCAL_H

#include "IAsteroid.h"
#include "DeepCoreMiner.h"
#include "StripMiner.h"

class AsteroBocal : public IAsteroid
{
private:
	std::string	name;

public:
	AsteroBocal();
	~AsteroBocal();
	AsteroBocal(const AsteroBocal& obj);
	AsteroBocal& operator=(const AsteroBocal& obj);
	std::string beMined(DeepCoreMiner* d) const;
	std::string beMined(StripMiner* s) const;
	std::string	getName() const;
};


#endif //EX04_ASTEROBOCAL_H
