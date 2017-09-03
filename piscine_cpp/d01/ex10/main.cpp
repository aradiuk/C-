#include <iostream>
#include <fstream>
#include <cstring>

void	readFile(int argc, char **argv);

int main(int argc, char **argv)
{
	if (argc > 1)
		readFile(argc, argv);
	else
	{
		std::string str;
		while (std::getline(std::cin, str))
			std::cout << str << std::endl;
	}
	return 0;
}

void	readFile(int argc, char **argv)
{
	std::string		str;

	for (int i = 1; i < argc; i++)
	{
		std::ifstream	fileStream;

		std::string fileName = argv[i];
		fileStream.open(fileName);
		if (!fileStream.is_open())
			std::cerr << "cato9tails: " << fileName << ": " << std::strerror(errno) << std::endl;
		else
		{
			while (std::getline(fileStream, str))
				std::cout << str << std::endl;
			fileStream.close();
		}
	}
}