#ifndef EX03_AMATERIA_H
#define EX03_AMATERIA_H

#include <iostream>
#include "ICharacter.h"

class AMateria
{
private:
	std::string		type;
	unsigned int	xp_;

public:
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria(const AMateria& obj);
	AMateria& operator=(const AMateria& obj);

	std::string const & getType() const;
	unsigned int		getXP() const;

	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);

};

#endif //EX03_AMATERIA_H
