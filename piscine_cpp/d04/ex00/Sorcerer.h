#ifndef EX00_SORCERER_H
#define EX00_SORCERER_H

#include <iostream>
#include "Victim.h"

class Sorcerer
{
private:
	std::string	name;
	std::string	title;

public:
	Sorcerer(std::string const &n, std::string const & t);
	~Sorcerer();
	Sorcerer(const Sorcerer& obj);
	Sorcerer& operator=(const Sorcerer& obj);
	std::string	getName() const;
	std::string	getTitle() const;
	void		polymorh(Victim const &obj) const;
};

std::ostream& operator<<(std::ostream& os, const Sorcerer& obj);
#endif //EX00_SORCERER_H
