#include "ScavTrap.h"
#include <ctime>

ScavTrap::ScavTrap(std::string n) :
		hitPoints(100), energyPoints(50), level(1),
		meleeDamage(20), rangedDamage(15), armorReduction(3)
{
	name = n;
	std::cout << "\nStarting bootup sequence... Directive one: Protect humanity! Directive two: Obey Jack at all costs.";
	std::cout << " Directive three: Dance!\nDesignation: " << name << ", Hyperion Robot, Class D.";
	std::cout << " Please adjust factory settings to meet your needs before deployment.\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "\nI'll die the way I lived: useless!\n";
}

ScavTrap::ScavTrap(const ScavTrap &obj)
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

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
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

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "\nReady for the PUNCHline?!";
	std::cout << "Steward bot " << this->name << " attacks ";
	std::cout << target << " in melee, causing " << this->meleeDamage;
	std::cout << " points of damage!\n";
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "\nYou're listening to 'Short-Range Damage Radio.'";
	std::cout << "Steward bot " << this->name << " attacks ";
	std::cout << target << " at range, causing " << this->rangedDamage;
	std::cout << " points of damage!\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "\nOw hohoho, that hurts! Yipes!";
	std::cout << "Steward bot " << this->name << " took ";
	std::cout << amount - this->armorReduction << " points of damage. And now has ";
	this->hitPoints -= (amount - this->armorReduction);
	this->hitPoints <= 0 ? 0 : this->hitPoints;
	std::cout << this->hitPoints << " HP.\n";
	if (this->hitPoints == 0)
		std::cout << "I'm too pretty to die!\n";
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "Health! Eww, what flavor is red?\n";
	std::cout << "Steward bot " << this->name << " repaired ";
	std::cout << amount << " points of HP. And now has ";
	this->hitPoints += amount;
	this->hitPoints > MAX_HPOINTS ? MAX_HPOINTS : this->hitPoints;
	std::cout << this->hitPoints << " HP.\n";
}

void	challenge0()
{
	int		answer;
	int		lives = 3;

	std::cout << "\nFor this challenge you have to convert a binary number. You only have 3 tries, so don't make mistakes.\n";
	std::cout << "Or get ready to see some meat confetti! Go!\n";
	std::cout << "The number to convert: '00101010'.\n";
	do
	{
		std::cin >> answer;
		if (answer != 42)
		{
			lives--;
			std::cout << "Too bad. You have " << lives << " tries left.\n";
		}
	} while (answer != 42 && lives > 0);
	if (lives == 0)
		std::cout << "You lost. Ha ha, this is in no way surprising! Ha ha!";
	else
		std::cout << "I'll get you next time!\n";
}

void	challenge1()
{
	std::string	answer;
	int			lives = 3;

	std::cout << "\nFor this challenge you are going to guess one of my riddles. It's super easy, I promise.\n";
	std::cout << "What gets wet when dries?\n";
	do
	{
		std::cin >> answer;
		if (answer != "towel")
		{
			lives--;
			std::cout << "Too bad. You have " << lives << " tries left.\n";
		}
	} while (answer != "towel" && lives > 0);
	if (lives == 0)
		std::cout << "You lost. Ha ha, this is in no way surprising! Ha ha!";
	else
		std::cout << "I'll get you next time!\n";
}

void	challenge2()
{
	std::string	answer;
	int			lives = 3;

	std::cout << "\nYou are a lucky puny human! How did you know to pick this one?!\n Uh.. Anyway. Here it is.\n";
	std::cout << "Say my name.\n";
	do
	{
		std::cin >> answer;
		if (answer != "Heisenberg" && answer != "heisenberg")
		{
			lives--;
			std::cout << "Too bad. You have " << lives << " tries left.\n";
		}
	} while (answer != "Heisenberg" && lives > 0 && answer != "heisenberg");
	if (lives == 0)
		std::cout << "You lost. Ha ha, this is in no way surprising! Ha ha!";
	else
		std::cout << "I'll get you next time!\n";

}

void ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string	challenge[3];
	int			chalNumber;
	int			pick;

	if (this->energyPoints == 100)
		srand(time(0));
	chalNumber = rand() % 3;
	std::cout << "\nHello, Newcomer! I have a very simple challenge for you. Just pick a number and you are free to go: ";
	std::cin >> pick;
	std::cout << "Hehehehe, mwaa ha ha ha, MWAA HA HA HA! Congratulations! You've just picked yourself the hardest one!\n";
	chalNumber = (chalNumber + pick) % 3;
	this->energyPoints--;
	switch (chalNumber)
	{
		case 0:
			challenge0();
			break;
		case 1:
			challenge1();
			break;
		case 2:
			challenge2();
			break;
	}
}