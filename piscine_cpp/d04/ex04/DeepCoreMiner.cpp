//
// Created by andrew on 25.08.17.
//

#include "DeepCoreMiner.h"

DeepCoreMiner::DeepCoreMiner() : IMiningLaser()
{}

DeepCoreMiner::~DeepCoreMiner()
{}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner &obj)
{}

DeepCoreMiner& DeepCoreMiner::operator=(const DeepCoreMiner &obj)
{}

void DeepCoreMiner::mine(IAsteroid *a)
{
	std::cout << "* mining deep ... got " << a->beMined(this) << "!\n";
}

