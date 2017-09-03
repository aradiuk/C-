#ifndef EX00_VICTIM_H
#define EX00_VICTIM_H

#include "iostream"

class Victim
{
private:
	std::string name;

public:
	Victim(std::string n);
	virtual ~Victim();
	Victim(const Victim& obj);
	Victim& operator=(const Victim& obj);
	std::string getName() const;
	void			setName(std::string n);
	virtual void	getPolymorphed() const;
};

std::ostream& operator<<(std::ostream& os, const Victim& obj);
#endif //EX00_VICTIM_H
