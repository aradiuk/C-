#include "HumanA.h"

HumanA::HumanA(std::string n, Weapon& weap) : name(n), weapon(&weap)
{}

HumanA::~HumanA()
{}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}