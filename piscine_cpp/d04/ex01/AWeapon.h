#ifndef EX01_AWEAPON_H
#define EX01_AWEAPON_H

#include <iostream>

class AWeapon
{
private:
	std::string	wName;
	int			wCost;
	int			wDamage;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();
	AWeapon(const AWeapon& obj);
	AWeapon& operator=(const AWeapon& obj);
	std::string		getName() const;
	int				getAPCost() const;
	int				getDamage() const;
	virtual void	attack() const = 0;
};


#endif //EX01_AWEAPON_H
