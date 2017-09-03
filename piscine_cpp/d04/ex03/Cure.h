#ifndef EX03_CURE_H
#define EX03_CURE_H

#include "AMateria.h"

class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	Cure(const Cure& obj);
	Cure& operator=(const Cure& obj);

	virtual AMateria*	clone() const;
	virtual void		use(ICharacter& target);
};


#endif //EX03_CURE_H
