
#ifndef EX01_ENEMY_H
#define EX01_ENEMY_H

#include <iostream>

class Enemy
{
private:
	int			hitPoint;
	std::string	type;

public:
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	Enemy(const Enemy& obj);
	Enemy& operator=(const Enemy& obj);
	std::string	getType() const;
	int			getHP() const;
	virtual void	takeDamage(int amount);
};


#endif //EX01_ENEMY_H
