#include <iostream>

int main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	p_str = &str;
	std::string&	r_str = str;

	std::cout << "String: " << str << "\n";
	std::cout << "Pointer: " << *p_str << "\n";
	std::cout << "Reference: " << r_str << "\n";
	return 0;
}