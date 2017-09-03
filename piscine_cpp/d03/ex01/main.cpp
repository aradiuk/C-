#include <iostream>
#include "ScavTrap.h"

int main()
{

	ScavTrap	a;
	ScavTrap	b("Another");

	a.meleeAttack("Brick");
	a.rangedAttack("Mordekai");
	a.takeDamage(10);
	a.takeDamage(25);
	a.beRepaired(10);
	b.beRepaired(0); // Displaying HP before assigment
	b = a;
	b.beRepaired(0); // Displaying HP after assignment

	ScavTrap	c(b);
	c.beRepaired(0); // Displaying copy constructor

	c.challengeNewcomer("Player");
	c.challengeNewcomer("Player");
	c.challengeNewcomer("Player");
	c.challengeNewcomer("Player");

	return 0;
}