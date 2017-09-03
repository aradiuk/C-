#include "MiningBarge.h"

MiningBarge::MiningBarge()
{}

MiningBarge::~MiningBarge()
{}

MiningBarge::MiningBarge(const MiningBarge &obj)
{
	this->lasers[0] = obj.lasers[0];
	this->lasers[1] = obj.lasers[1];
	this->lasers[2] = obj.lasers[2];
	this->lasers[3] = obj.lasers[3];
}

MiningBarge& MiningBarge::operator=(const MiningBarge &obj)
{
	this->lasers[0] = obj.lasers[0];
	this->lasers[1] = obj.lasers[1];
	this->lasers[2] = obj.lasers[2];
	this->lasers[3] = obj.lasers[3];
	return (*this);
}

void	MiningBarge::equip(IMiningLaser *l)
{
	for (int i = 0; i < 4; i++)
		if (lasers[i] == 0)
		{
			lasers[i] = l;
			break;
		}
}

void	MiningBarge::mine(IAsteroid *a) const
{
	for (int i = 0; i < 4; i++)
		if (lasers[i] != 0)
			lasers[i]->mine(a);
}