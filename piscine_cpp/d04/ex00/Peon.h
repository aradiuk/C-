#ifndef EX00_PEON_H
#define EX00_PEON_H

#include "Victim.h"

class Peon : public Victim
{
public:
	Peon(std::string n);
	~Peon();
	Peon(const Peon& obj);
	Peon& operator=(const Peon& obj);
	virtual void	getPolymorphed() const;
};


#endif //EX00_PEON_H
