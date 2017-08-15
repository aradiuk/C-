#include <iostream>
#include "pony.h"

Pony	*ponyOnTheHeap()
{
	Pony *pony = new Pony;

	pony->age = 3;
	pony->color = "white";
	pony->height = 50;
	pony->weight = 1;
	std::cout << "We've created a HEAP-pony with height " << pony->height << " and weight " << pony->weight;
	std::cout << ". It's color is " << pony->color << " and it's " << pony->age << " years old.\n";
	std::cout << "Memory where our HEAP-pony was allocated: " << pony << std::endl;
	return (pony);
}

void	ponyOnTheStack()
{
	Pony	pony;

	pony.age = 13;
	pony.color = "black";
	pony.height = 100;
	pony.weight = 10;
	std::cout << "We've created a STACK-pony with height " << pony.height << " and weight " << pony.weight;
	std::cout << ". It's color is " << pony.color << " and it's " << pony.age << " years old.\n";
	std::cout << "Memory where our STACK-pony was allocated: " << &pony << std::endl;
}
int main()
{
	Pony	*pony;

	std::cout << "Let's create two types of pony, a HEAP and a STACK one.\n";
	pony = ponyOnTheHeap();
	std::cout << "HEAP-pony was created, but not deleted yet.\n";
	ponyOnTheStack();
	std::cout << "STACK-pony was created and deleted after the function handed off control.\n";
	std::cout << "Deleting HEAP-pony...\n";
	delete pony;
	pony = 0;
	return (0);
}