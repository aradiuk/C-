#include "TacticalMarine.h"

TacticalMarine::TacticalMarine() : ISpaceMarine()
{
	std::cout << "Tactical Marine ready for battle.\n";
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ...\n";
}

TacticalMarine::TacticalMarine(const TacticalMarine &obj)
{}

TacticalMarine& TacticalMarine::operator=(const TacticalMarine &obj)
{}

ISpaceMarine* TacticalMarine::clone() const
{
	return (new TacticalMarine());
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !\n";
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *\n";
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *\n";
}

