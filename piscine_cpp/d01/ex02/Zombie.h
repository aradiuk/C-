//
// Created by andrew on 15.08.17.
//

#include <iostream>

#ifndef EX02_ZOMBIE_H
#define EX02_ZOMBIE_H


class Zombie
{
private:
	std::string	name;
	std::string	type;
	std::string	roar;

public:
	std::string	names[8] = {"BOOMER", "HUNTER", "SMOKER",
						"TANK", "CHARGER", "JOCKEY",
						"SPITTER", "WITCH"};
	Zombie(std::string name = "Zombie");
	~Zombie();
	void		announce();
	void		setName(std::string name);
	void		setType(std::string type);
	void		setRoar(std::string roar);
	std::string	getName();
	std::string	getType();
	std::string	getRoar();
};


#endif //EX02_ZOMBIE_H
