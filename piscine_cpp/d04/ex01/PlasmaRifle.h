#ifndef EX01_PLASMARIFLE_H
#define EX01_PLASMARIFLE_H

#include "AWeapon.h"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	~PlasmaRifle();
	PlasmaRifle(const PlasmaRifle& obj);
	PlasmaRifle& operator=(const PlasmaRifle& obj);
	virtual void	attack() const;
};


#endif //EX01_PLASMARIFLE_H
