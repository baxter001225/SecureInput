#include <iostream>
#include <string>

template<typename T>
void secInput(T& input, std::string iChar, std::string errChar)
{
inputAgain:
	std::cout << iChar;
	std::cin >> input;
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		std::cout << errChar << std::endl;
		goto inputAgain;
	}
}