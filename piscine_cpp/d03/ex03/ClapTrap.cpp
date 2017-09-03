//
// Created by andrew on 21.08.17.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string n)
{
	std::cout << "Creating a base class for ****Trap.\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "Initialising a base class destructor.\n";
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "\nSummoned bot: \"Knock Knock.\" Claptrap: \"Who's there?\" Summoned bot: \"Wub.\" ";
	std::cout << "Claptrap: \"Wub who?\" Summoned bot: \"Wubwubwubwubwub.\" Claptrap: \"... You're dead to me.\" \n";
	hitPoints = obj.hitPoints;
	energyPoints = obj.energyPoints;
	level = obj.level;
	meleeDamage = obj.meleeDamage;
	rangedDamage = obj.rangedDamage;
	armorReduction = obj.armorReduction;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "\nAssignment operator used. Yes, no quotes here either.\n";
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->level = obj.level;
	this->meleeDamage = obj.meleeDamage;
	this->rangedDamage = obj.rangedDamage;
	this->armorReduction = obj.armorReduction;
	return (*this);
}