#ifndef EX01_POWERFIST_H
#define EX01_POWERFIST_H


#include "AWeapon.h"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	~PowerFist();
	PowerFist(const PowerFist& obj);
	PowerFist& operator=(const PowerFist& obj);
	virtual void	attack() const;
};


#endif //EX01_POWERFIST_H
