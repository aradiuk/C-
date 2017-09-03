#include "AWeapon.h"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) :
		wName(name), wCost(apcost), wDamage(damage)
{}

AWeapon::~AWeapon()
{}

AWeapon::AWeapon(const AWeapon &obj)
{
	this->wName = obj.wName;
	this->wCost = obj.wCost;
	this->wDamage = obj.wDamage;
}

AWeapon& AWeapon::operator=(const AWeapon &obj)
{
	this->wName = obj.wName;
	this->wCost = obj.wCost;
	this->wDamage = obj.wDamage;
	return (*this);
}

std::string	AWeapon::getName() const
{
	return (wName);
}

int			AWeapon::getAPCost() const
{
	return (wCost);
}

int			AWeapon::getDamage() const
{
	return (wDamage);
}