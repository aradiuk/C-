//
// Created by andrew on 25.08.17.
//

#include "BocalSteroid.h"

BocalSteroid::BocalSteroid() : IAsteroid(), name("BocalSteroid")
{}

BocalSteroid::~BocalSteroid()
{}

BocalSteroid::BocalSteroid(const BocalSteroid &obj) : IAsteroid(obj)
{}

BocalSteroid& BocalSteroid::operator=(const BocalSteroid &obj)
{
	IAsteroid::operator=(obj);
}

std::string BocalSteroid::getName() const
{
	return (name);
}

std::string BocalSteroid::beMined(DeepCoreMiner *d) const
{
	return ("Zazium");
}

std::string	BocalSteroid::beMined(StripMiner *s) const
{
	return ("Krpite");
}