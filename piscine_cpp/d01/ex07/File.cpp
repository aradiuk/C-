//
// Created by andrew on 16.08.17.
//

#include "File.h"

File::File()
{}

File::~File()
{}

void	File::setFilename(char* name)
{
	filename = name;
}

void	File::setString1(char* s1)
{
	string1 = s1;
}

void	File::setString2(char* s2)
{
	string2 = s2;
}

std::string	File::getFilename() const
{
	return (this->filename);
}

std::string	File::getString1() const
{
	return (this->string1);
}

std::string	File::getString2() const
{
	return (this->string2);
}

void	File::openFile()
{
	this->input.open(this->filename);
}

void	File::openOutputFile()
{
	this->output.open(this->filename + ".replace");
}

void	File::outPut(std::string& line)
{
	while (line.find(this->string1) != std::string::npos)
		line.replace(line.find((this->string1)), this->string1.length(), this->string2);
	this->output << line << "\n";
}