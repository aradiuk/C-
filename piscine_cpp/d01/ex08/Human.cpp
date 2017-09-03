//
// Created by andrew on 16.08.17.
//

#include "Human.h"

void	Human::meleeAttack(std::string const &target)
{
	std::cout << "Melee attack was made against " << target << std::endl;
}

void	Human::rangedAttack(std::string const &target)
{
	std::cout << "Ranged attack was made against " << target << std::endl;
}

void	Human::intimidatingShout(std::string const &target)
{
	std::cout << "Intimidating shout was used against " << target << std::endl;
}

void	Human::action(std::string const &action_name, std::string const &target)
{
	Human	obj;
	std::string	names[3] = {"melee", "ranged", "shout"};
	void	(Human::* point[3])(std::string const &target) =
															{&Human::meleeAttack,
															 &Human::rangedAttack,
															 &Human::intimidatingShout};
	for(int i = 0; i < 3; i++)
		if (action_name == names[i])
			(obj.*point[i])(target);
}