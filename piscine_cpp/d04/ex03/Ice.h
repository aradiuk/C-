#ifndef EX03_ICE_H
#define EX03_ICE_H

#include "AMateria.h"

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(const Ice& obj);
	Ice& operator=(const Ice& obj);

	virtual AMateria*	clone() const;
	virtual void		use(ICharacter& target);
};


#endif //EX03_ICE_H
