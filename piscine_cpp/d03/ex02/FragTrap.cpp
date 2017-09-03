#include "FragTrap.h"
#include <ctime>

FragTrap::FragTrap(std::string n)
{
	hitPoints = 100;
	energyPoints = 100;
	level = 1;
	meleeDamage = 30;
	rangedDamage = 20;
	armorReduction = 5;
	name = n;
	std::cout << "\nBooting sequence complete. Hello! I am your new steward bot. ";
	std::cout << "Designation: " << name << ", Hyperion Robot, Class C.";
	std::cout << " Please adjust factory settings to meet your needs before deployment.\n";
}

FragTrap::~FragTrap()
{
	std::cout << "\nI'll die the way I lived: annoying!\n";
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "\nSummoned bot: \"Knock Knock.\" Claptrap: \"Who's there?\" Summoned bot: \"Itch.\" ";
	std::cout << "Claptrap: \"Itch who?\" Summoned bot: \"Bless you!\"\n";
	hitPoints = obj.hitPoints;
	energyPoints = obj.energyPoints;
	level = obj.level;
	meleeDamage = obj.meleeDamage;
	rangedDamage = obj.rangedDamage;
	armorReduction = obj.armorReduction;
}

FragTrap& FragTrap::operator=(const FragTrap &obj)
{
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->level = obj.level;
	this->meleeDamage = obj.meleeDamage;
	this->rangedDamage = obj.rangedDamage;
	this->armorReduction = obj.armorReduction;
	return (*this);
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "\nLets kick some ice. Heyyah!\n";
	std::cout << "Steward bot " << this->name << " attacks ";
	std::cout << target << " in melee, causing " << this->meleeDamage;
	std::cout << " points of damage!\n";
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "\nRatattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!\n";
	std::cout << "Steward bot " << this->name << " attacks ";
	std::cout << target << " at range, causing " << this->rangedDamage;
	std::cout << " points of damage!\n";
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "\nWhy did they build me out of galvanized flesh?!\n";
	std::cout << "Steward bot " << this->name << " took ";
	std::cout << amount - this->armorReduction << " points of damage. And now has ";
	this->hitPoints -= (amount - this->armorReduction);
	this->hitPoints <= 0 ? 0 : this->hitPoints;
	std::cout << this->hitPoints << " HP.\n";
	if (this->hitPoints == 0)
		std::cout << "I'm too pretty to die!\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "\nSweet life juice!\n";
	std::cout << "Steward bot " << this->name << " repaired ";
	std::cout << amount << " points of HP. And now has ";
	this->hitPoints += amount;
	this->hitPoints > MAX_HPOINTS ? MAX_HPOINTS : this->hitPoints;
	std::cout << this->hitPoints << " HP.\n";
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string	attack[8];

	if (this->energyPoints == 100)
		srand(time(0));
	attack[0] = "I am a tornado of death and bullets!\n";
	attack[1] = "Ha ha ha! Fall before your robot overlord!\n";
	attack[2] = "Pull pin, throw! Hot potato!\n";
	attack[3] = "Hey everybody, check out my package!\n";
	attack[4] = "Wubwubwub. Dubstep dubstep. Wubwubwubwub DROP! Dubstep!\n";
	attack[5] = "Don't bother with plastic surgery - there's NO fixing that!\n";
	attack[6] = "Get ready for some Fragtrap face time!\n";
	attack[7] = "Take two bullets, then call me in the morning.\n";
	if (this->energyPoints >= 25)
		std::cout << attack[rand() % 8];
	this->energyPoints -= 25;
	if (this->energyPoints <= 24)
	{
		this->energyPoints = 24;
		std::cout << "Who needs energy anyway, am I right?\n";
	}
}