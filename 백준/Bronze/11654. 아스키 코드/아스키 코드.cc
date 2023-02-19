#include <iostream>

int main()
{
	char inp = '\0';
	std::cin >> inp;
	std::cout << static_cast<int>(inp);
	return 0;
}