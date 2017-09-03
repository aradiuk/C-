#ifndef EX04_IMININGLASER_H
#define EX04_IMININGLASER_H

#include <iostream>
//#include "IAsteroid.h"

class	IAsteroid;

class IMiningLaser
{
public:
	IMiningLaser();
	virtual ~IMiningLaser();
	IMiningLaser(const IMiningLaser& obj);
	IMiningLaser& operator=(const IMiningLaser& obj);
	virtual void	mine(IAsteroid* a) = 0;
};


#endif //EX04_IMININGLASER_H
