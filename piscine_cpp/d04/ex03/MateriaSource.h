#ifndef EX03_MATERIASOURCE_H
#define EX03_MATERIASOURCE_H

#include "IMateriaSource.h"
#include "AMateria.h"

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	materias[4] = {0};

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource& obj);
	MateriaSource& operator=(const MateriaSource& obj);

	virtual void		learnMateria(AMateria* m);
	virtual AMateria*	createMateria(std::string const & type);
};


#endif //EX03_MATERIASOURCE_H
