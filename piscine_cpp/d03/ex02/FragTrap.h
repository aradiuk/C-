#ifndef EX00_FRAGTRAP_H
#define EX00_FRAGTRAP_H
#include <iostream>
#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string n = "FR4G-TP");
	~FragTrap();
	FragTrap(const FragTrap& obj);
	FragTrap& operator=(const FragTrap& obj);
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const &target);
};


#endif //EX00_FRAGTRAP_H
