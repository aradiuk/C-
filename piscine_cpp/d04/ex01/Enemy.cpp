#include "Enemy.h"

Enemy::Enemy(int hp, std::string const &type) :
	hitPoint(hp), type(type)
{}

Enemy::~Enemy()
{}

Enemy::Enemy(const Enemy &obj)
{
	hitPoint = obj.hitPoint;
	type = obj.type;
}

Enemy& Enemy::operator=(const Enemy &obj)
{
	this->hitPoint = obj.hitPoint;
	this->type = obj.type;

	return (*this);
}

std::string Enemy::getType() const
{
	return (type);
}

int			Enemy::getHP() const
{
	return (hitPoint);
}

void		Enemy::takeDamage(int amount)
{
	if (amount < 0)
		return ;
	hitPoint -= amount;
	hitPoint < 0 ? 0 : hitPoint;
}
