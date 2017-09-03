#include "NinjaTrap.h"

NinjaTrap::NinjaTrap(std::string n)
{
	hitPoints = 60;
	MAX_HPOINTS = 60;
	energyPoints = 120;
	MAX_EPOINTS = 120;
	level = 1;
	name = n;
	meleeDamage = 60;
	rangedDamage = 5;
	armorReduction = 0;
	std::cout << "NinjaTrap was created from parent ClapTrap class.\n";
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap commited harakiri.\n";
}

NinjaTrap::NinjaTrap(const NinjaTrap &obj)
{
	std::cout << "NinjaTrap's copy constructor.\n";
	hitPoints = obj.hitPoints;
	energyPoints = obj.energyPoints;
	level = obj.level;
	meleeDamage = obj.meleeDamage;
	rangedDamage = obj.rangedDamage;
	armorReduction = obj.armorReduction;
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap &obj)
{
	std::cout << "NinjaTrap's assignment overloaded operator.\n";
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->level = obj.level;
	this->meleeDamage = obj.meleeDamage;
	this->rangedDamage = obj.rangedDamage;
	this->armorReduction = obj.armorReduction;
	return (*this);
}

void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NinjaTrap's melee attack.\n";
	std::cout << "Steward bot " << this->name << " attacks ";
	std::cout << target << " in melee, causing " << this->meleeDamage;
	std::cout << " points of damage!\n";
}

void NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "NinjaTrap's ranged attack.\n";
	std::cout << "Steward bot " << this->name << " attacks ";
	std::cout << target << " at range, causing " << this->rangedDamage;
	std::cout << " points of damage!\n";
}

void NinjaTrap::takeDamage(unsigned int amount)
{
	std::cout << "NinjaTrap's 'takeDamage' function.\n";
	std::cout << "Steward bot " << this->name << " took ";
	std::cout << amount - this->armorReduction << " points of damage. And now has ";
	this->hitPoints -= (amount - this->armorReduction);
	this->hitPoints <= 0 ? 0 : this->hitPoints;
	std::cout << this->hitPoints << " HP.\n";
	if (this->hitPoints == 0)
		std::cout << "I'm too pretty to die!\n";
}

void NinjaTrap::beRepaired(unsigned int amount)
{
	std::cout << "NinjaTrap's 'beRepaired' function.\n";
	std::cout << "Steward bot " << this->name << " repaired ";
	std::cout << amount << " points of HP. And now has ";
	this->hitPoints += amount;
	this->hitPoints > MAX_HPOINTS ? MAX_HPOINTS : this->hitPoints;
	std::cout << this->hitPoints << " HP.\n";
}

void NinjaTrap::ninjaShoebox(std::string const &target)
{
	std::cout << "A function that does something funny. As expected.\n";
}
