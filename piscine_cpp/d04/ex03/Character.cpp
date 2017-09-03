#include "Character.h"

Character::Character(std::string const & n) : ICharacter(), name(n)
{}

Character::~Character()
{}

Character::Character(const Character &obj)
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != 0)
			delete inventory[i];
	this->name = obj.getName();
	for (int i = 0; i < 4; i++)
		this->inventory[i] = obj.inventory[i];
}

Character& Character::operator=(const Character &obj)
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != 0)
			delete inventory[i];
	this->name = obj.getName();
	for (int i = 0; i < 4; i++)
		this->inventory[i] = obj.inventory[i];
	return (*this);
}

std::string const& Character::getName() const
{
	return (name);
}

bool	Character::emptySlot()
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] == 0)
			return (true);
	return (false);
}

void	Character::equip(AMateria *m)
{
	if (this->emptySlot() && m)
		for (int i = 0; i < 4; i++)
			if (this->inventory[i] == 0)
			{
				this->inventory[i] = m;
				break;
			}
}

void	Character::unequip(int idx)
{
	this->inventory[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx > 3 || idx < 0 || this->inventory[idx] == 0)
		return ;
	this->inventory[idx]->use(target);
}