#ifndef EX01_SCAVTRAP_H
#define EX01_SCAVTRAP_H
#include <iostream>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string n = "SC4V-TP");
	~ScavTrap();
	ScavTrap(const ScavTrap& obj);
	ScavTrap& operator=(const ScavTrap& obj);
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(std::string const &target);
};


#endif //EX00_FRAGTRAP_H
