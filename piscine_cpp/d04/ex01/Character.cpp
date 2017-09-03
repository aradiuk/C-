#include "Character.h"

Character::Character(std::string const &name) : name(name), actionPoints(40)
{}

Character::~Character()
{}

Character::Character(const Character &obj)
{
	name = obj.name;
	actionPoints = obj.actionPoints;
	*weapon = *(obj.weapon);
}

Character& Character::operator=(const Character &obj)
{
	this->name = obj.name;
	this->actionPoints = obj.actionPoints;
	*(this->weapon) = *(obj.weapon);
}

void	Character::recoverAP()
{
	actionPoints += 10;
	actionPoints > 40 ? 40 : actionPoints;
}

void	Character::equip(AWeapon *aweapon)
{
	weapon = aweapon;
}

std::string	Character::getName() const
{
	return (name);
}

int		Character::getAP() const
{
	return (actionPoints);
}

AWeapon*	Character::getWeapon() const
{
	return (weapon);
}

void	Character::attack(Enemy *enemy)
{
	if (actionPoints < weapon->getAPCost())
		std::cout << "Insufficient AP.\n";
	else if (weapon != 0)
	{
		enemy->takeDamage(weapon->getDamage());
		actionPoints -= weapon->getAPCost();
		std::cout << name << " attacks " << enemy->getType();
		std::cout << " with a " << weapon->getName() << std::endl;
		weapon->attack();
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}

std::ostream& operator<<(std::ostream& os, const Character& obj)
{
	os << obj.getName() << " has " << obj.getAP() << " AP";
	if (obj.getWeapon() != 0)
		os << " and wields a " << obj.getWeapon()->getName() << ".\n";
	else
		os << " and is unarmed.\n";
	return (os);
}