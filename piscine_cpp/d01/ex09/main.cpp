#include <iostream>
#include "Logger.h"

int main()
{
	Logger log("FILE");
	log.log("console", "Access granted!");
	log.log("file", "Access denied!");
	return 0;
}