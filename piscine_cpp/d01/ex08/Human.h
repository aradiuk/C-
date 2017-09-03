//
// Created by andrew on 16.08.17.
//
#include <iostream>

#ifndef EX08_HUMAN_H
#define EX08_HUMAN_H


class Human
{
private:
	void	meleeAttack(std::string const & target);
	void	rangedAttack(std::string const & target);
	void	intimidatingShout(std::string const & target);

public:
	void	action(std::string const & action_name, std::string const & target);
};


#endif //EX08_HUMAN_H
