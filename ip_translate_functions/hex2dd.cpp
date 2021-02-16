#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Usage: ./hex2dd [ip-in-hex-format]\nE.g.: ./hex2dd 0x8002c2f2" << std::endl;
		return 1;
	}

	std::string ipStr{argv[1]};

	auto xPos = ipStr.find('x');
	if (xPos != std::string::npos) {
		ipStr = ipStr.substr(xPos + 1);
	}

	if (ipStr.length() != 8) {
		if (ipStr.length() == 1 && ipStr[0] == '0') {
			std::cout << "0.0.0.0" << std::endl;
			return 0;
		}
		std::cout << "Wrong ip length" << std::endl;
		return 1;
	}

	
	std::string ip;
	std::size_t tmp;
	ip += std::to_string(std::stoi(ipStr.substr(0, 2), &tmp, 16));
	ip += ".";
	ip += std::to_string(std::stoi(ipStr.substr(2, 2), &tmp, 16));
	ip += ".";
	ip += std::to_string(std::stoi(ipStr.substr(4, 2), &tmp, 16));
	ip += ".";
	ip += std::to_string(std::stoi(ipStr.substr(6, 2), &tmp, 16));

	std::cout << ip << std::endl;
}
