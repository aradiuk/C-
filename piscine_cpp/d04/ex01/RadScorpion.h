#ifndef EX01_RADSCORPION_H
#define EX01_RADSCORPION_H

#include "Enemy.h"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	~RadScorpion();
	RadScorpion(const RadScorpion& obj);
	RadScorpion& operator=(const RadScorpion& obj);
};


#endif //EX01_RADSCORPION_H
