//
// Created by andrew on 25.08.17.
//

#include "AsteroBocal.h"

AsteroBocal::AsteroBocal() : IAsteroid(), name("AsteroBocal")
{}

AsteroBocal::~AsteroBocal()
{}

AsteroBocal::AsteroBocal(const AsteroBocal &obj) : IAsteroid(obj)
{}

AsteroBocal& AsteroBocal::operator=(const AsteroBocal &obj)
{
	IAsteroid::operator=(obj);
}

std::string AsteroBocal::getName() const
{
	return (name);
}

std::string AsteroBocal::beMined(DeepCoreMiner *d) const
{
	return ("Thorite");
}

std::string	AsteroBocal::beMined(StripMiner *s) const
{
	return ("Flavium");
}