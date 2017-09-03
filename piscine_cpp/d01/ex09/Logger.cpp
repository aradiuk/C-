//
// Created by andrew on 16.08.17.
//

#include "Logger.h"

Logger::Logger(std::string name)
{
	if (name.empty())
		std::cout << "No filename.\n";
	else
		filename = name;
}

Logger::~Logger()
{}

std::string Logger::getFilename() const
{
	return (filename);
}

int	Logger::logToConsole(std::string message)
{
	std::cout << makeLogEntry(message) << std::endl;
}

int	Logger::logToFile(std::string message)
{
	std::ofstream fileStream;

	fileStream.open(filename, std::ios_base::app);
	if (!fileStream.is_open())
		std::cout << "Couldn't open the file.\n";
	else
		fileStream << makeLogEntry(message) << "\n";
}

std::string Logger::makeLogEntry(std::string entry)
{
	char str[23];

	time_t time = time_t(NULL);
	if (strftime(str, sizeof(str), "[%Y/%d/%m_%H:%M:%S] ", localtime(&time)))
		return (str + entry + "\n");
}

void	Logger::log(std::string const & dest, std::string const & message)
{
	Logger obj(filename);
	std::string destination[2] = {"console", "file"};
	int	(Logger::* logs[2])(std::string message) = {&Logger::logToConsole, &Logger::logToFile};

	for(int i = 0; i < 2; i ++)
		if (dest == destination[i])
			(obj.*logs[i])(message);
}