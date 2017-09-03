#ifndef EX03_NINJATRAP_H
#define EX03_NINJATRAP_H

#include "ClapTrap.h"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(std::string n = "NNJ4-TP");
	~NinjaTrap();
	NinjaTrap(const NinjaTrap& obj);
	NinjaTrap& operator=(const NinjaTrap& obj);
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	ninjaShoebox(std::string const &target);
};


#endif //EX03_NINJATRAP_H
