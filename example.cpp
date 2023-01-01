#include "secInput.hpp"

int main()
{
	int i;

	secInput(i, "Please input number : ", "Invaild value.. Please try again..");

	std::cout << i << std::endl;

	return 0;
}