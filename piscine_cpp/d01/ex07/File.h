//
// Created by andrew on 16.08.17.
//
#include <iostream>
#include <fstream>

#ifndef EX07_FILE_H
#define EX07_FILE_H


class File
{
private:
	std::string	filename;
	std::string string1;
	std::string	string2;

public:
	std::ifstream	input;
	std::ofstream	output;
	File();
	~File();
	void			setFilename(char* name);
	void			setString1(char* s1);
	void			setString2(char* s2);
	std::string		getFilename() const;
	std::string		getString1() const;
	std::string		getString2() const;
	void			outPut(std::string& line);
	void			openFile();
	void			openOutputFile();
};


#endif //EX07_FILE_H
