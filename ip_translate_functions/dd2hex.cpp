#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Usage: ./hex2dd [ip-in-hex-format]\nE.g.: ./hex2dd 127.0.0.1" << std::endl;
		return 1;
	}

	std::string ipStr{argv[1]};

	if (ipStr.length() < 7 || ipStr.length() > 15) {
		std::cout << "Wrong ip length" << std::endl;
		return 1;
	}
	for (const auto& it : ipStr) {
		if (!isdigit(it) && it != '.') {
			std::cout << "Illegal symbol '" << it << "'" << std::endl;
			return 1;
		}
	}

	std::stringstream ssRes;
	ssRes << "0x";
	std::size_t dotPos = ipStr.find(".");
	while (dotPos != std::string::npos) {
		int val = std::stoi(ipStr.substr(0, dotPos));
		if (val < 16) {
			ssRes << "0";
		}
		ssRes << std::hex << val;
		ipStr = ipStr.substr(dotPos + 1);
	    dotPos = ipStr.find(".");
	}

	int val = std::stoi(ipStr);
	if (val < 16) {
		ssRes << "0";
	}
	ssRes << std::hex << val;

	if (ssRes.str() == "0x00000000") {
		std::cout << "0x0" << std::endl;
	} else {
		std::cout << ssRes.str() << std::endl;
	}
}
