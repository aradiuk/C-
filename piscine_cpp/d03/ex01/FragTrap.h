#ifndef EX00_FRAGTRAP_H
#define EX00_FRAGTRAP_H
#include <iostream>

class FragTrap
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
	const int	MAX_EPOINTS = 100;

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
