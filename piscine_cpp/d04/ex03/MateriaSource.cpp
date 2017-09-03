#include "MateriaSource.h"


MateriaSource::MateriaSource() : IMateriaSource()
{}

MateriaSource::~MateriaSource()
{}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = obj.materias[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &obj)
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = obj.materias[i];
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	while (this->materias[i] != 0)
		i++;
	this->materias[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (this->materias[i] != 0 && this->materias[i]->getType() == type)
			return (this->materias[i]);
	return (0);
}