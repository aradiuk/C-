//
// Created by andrew on 25.08.17.
//

#include "StripMiner.h"

StripMiner::StripMiner() : IMiningLaser()
{}

StripMiner::~StripMiner()
{}

StripMiner::StripMiner(const StripMiner &obj)
{}

StripMiner& StripMiner::operator=(const StripMiner &obj)
{}

void StripMiner::mine(IAsteroid *a)
{
	std::cout << "* strip mining ... got " << a->beMined(this) << "!\n";
}