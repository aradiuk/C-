#ifndef EX03_CHARACTER_H
#define EX03_CHARACTER_H

#include "ICharacter.h"
#include "AMateria.h"

class Character : public ICharacter
{
private:
	std::string	name;
	AMateria*	inventory[4] = {0};

public:
	Character(std::string const & name);
	~Character();
	Character(const Character& obj);
	Character& operator=(const Character& obj);

	bool						emptySlot();
	virtual std::string const & getName() const;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);
};

#endif //EX03_CHARACTER_H
