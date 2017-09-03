#include "ZombieHorde.h"
#include <ctime>

ZombieHorde::ZombieHorde(int N)
{
	number = N;
	if (N <= 0)
		std::cout << "There is no horde.\n";
	else
	{
		zombies = new Zombie[N];
		std::cout << N << " zombies have been created.\n";
		std::srand(std::time(0));
		for (int i = 0; i < N; i++)
			randomChump(&zombies[i]);
	}
}

ZombieHorde::~ZombieHorde()
{
	if (number > 0)
	{
		delete[] zombies;
	}
}

void	ZombieHorde::randomChump(Zombie* zombie)
{
	zombie->setName(zombie->names[rand() % 8]);
	zombie->announce();
}
