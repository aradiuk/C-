#include <iostream>
#include "Sorcerer.h"
#include "Peon.h"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Sorcerer andy("Andy", "the Greatest");
	Victim	jim("Jimmy");
	Peon	joe("Joe");

//	std::cout << robert << std::endl;
//	std::cout << andy << std::endl;
//	robert = andy;
//	std::cout << robert << std::endl;
	std::cout << robert << jim << joe;

	robert.polymorh(jim);
	robert.polymorh(joe);
	return 0;
}