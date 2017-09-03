#ifndef EX01_SCAVTRAP_H
#define EX01_SCAVTRAP_H
#include <iostream>

class ScavTrap
{
private:
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
