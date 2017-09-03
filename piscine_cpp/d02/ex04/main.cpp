#include <iostream>
#include "Fixed.h"
#include <sstream>

void	findParentheses(std::string input, int parenth[])
{
	size_t		parPos = 0;
	while ((parPos = input.find('(')) != std::string::npos)
	{
		input[parPos] = ' ';
		parenth[0]++;
	}
	while ((parPos = input.find(')')) != std::string::npos)
	{
		input[parPos] = 0;
		parenth[1]++;
	}
}

int main(int argc, char *argv[])
{
	std::string	inputString;
	std::string::iterator strIter;
	int			parenthesis[2] = {0};
	Fixed		result;

	if (argc != 2)
	{
		std::cout << "Wrong input.\n";
		return (1);
	}
	inputString = argv[1];
	std::istringstream	iss(inputString);
	findParentheses(inputString, parenthesis);
	for (strIter = inputString.begin(); strIter != inputString.end(); strIter++)
	{
		if (*strIter == '(')
	}
	return 0;
}