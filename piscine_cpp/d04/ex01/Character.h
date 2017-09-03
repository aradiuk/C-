#ifndef EX01_CHARACTER_H
#define EX01_CHARACTER_H

#include <iostream>
#include "AWeapon.h"
#include "Enemy.h"

class Character
{
private:
	std::string	name;
	int			actionPoints;
	AWeapon		*weapon;

public:
	Character(std::string const & name);
	~Character();
	Character(const Character& obj);
	Character& operator=(const Character& obj);
	void		recoverAP();
	void		equip(AWeapon *aweapon);
	void		attack(Enemy *enemy);
	int			getAP() const;
	AWeapon		*getWeapon() const;
	std::string	getName() const;
};

std::ostream& operator<<(std::ostream& os, const Character& obj);
#endif //EX01_CHARACTER_H
