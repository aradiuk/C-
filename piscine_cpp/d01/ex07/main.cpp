#include <iostream>
#include <fstream>
#include "File.h"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments.\n";
		std::cout << "Usage: ./a.out filename string1 string2\n";
		return (1);
	}
	File inputFile;
	inputFile.setFilename(argv[1]);
	inputFile.setString1(argv[2]);
	inputFile.setString2(argv[3]);
	if (inputFile.getString1().empty() || inputFile.getString2().empty()  ||
			inputFile.getString1() == inputFile.getString2())
	{
		std::cout << "String(-s) is empty or the same.\n";
		return (1);
	}
	inputFile.openFile();
	if (inputFile.input.is_open())
	{
		std::string line;
		inputFile.openOutputFile();
		while (std::getline(inputFile.input, line))
			inputFile.outPut(line);
		inputFile.output.close();
	}
	inputFile.input.close();
	return 0;
}