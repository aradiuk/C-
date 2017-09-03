#include <iostream>
#include "FragTrap.h"

int main()
{
	FragTrap	a;
	FragTrap	b("Another");

	a.meleeAttack("Brick");
	a.rangedAttack("Mordekai");
	a.takeDamage(10);
	a.takeDamage(25);
	a.beRepaired(10);
	b.beRepaired(0); // Displaying HP before assigment
	b = a;
	b.beRepaired(0); // Displaying HP after assignment

	FragTrap	c(b);
	c.beRepaired(0); // Displaying copy constructor

	c.vaulthunter_dot_exe("puny human");
	c.vaulthunter_dot_exe("puny human");
	c.vaulthunter_dot_exe("puny human");
	c.vaulthunter_dot_exe("puny human");
	c.vaulthunter_dot_exe("puny human"); // Out of energy
	return 0;
}