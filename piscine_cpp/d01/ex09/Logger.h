//
// Created by andrew on 16.08.17.
//
#include <iostream>
#include <fstream>
#ifndef EX09_LOGGER_H
#define EX09_LOGGER_H


class Logger
{
public:
	Logger(std::string name = "file");
	~Logger();
	void		log(std::string const & dest, std::string const & message);

private:
	std::string	filename;
	int		logToConsole(std::string message);
	int		logToFile(std::string message);
	std::string	getFilename() const;
	std::string	makeLogEntry(std::string entry);

};


#endif //EX09_LOGGER_H
