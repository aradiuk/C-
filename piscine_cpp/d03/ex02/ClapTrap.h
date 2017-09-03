#ifndef EX02_CLAPTRAP_H
#define EX02_CLAPTRAP_H

#include "iostream"

class ClapTrap
{
protected:
	int			hitPoints;
	int			energyPoints;
	int			level;
	std::string name;
	int			meleeDamage;
	int			rangedDamage;
	int			armorReduction;
	const int	MAX_HPOINTS = 100;
	const int	MAX_EPOINTS = 50;

public:
	ClapTrap(std::string n = "CL4P-TP");
	~ClapTrap();
	ClapTrap(const ClapTrap& obj);
	ClapTrap& operator=(const ClapTrap& obj);
	virtual void	rangedAttack(std::string const &target) = 0;
	virtual	void	meleeAttack(std::string const &target) = 0;
	virtual void	takeDamage(unsigned int amount) = 0;
	virtual void	beRepaired(unsigned int amount) = 0;
};


#endif //EX02_CLAPTRAP_H
