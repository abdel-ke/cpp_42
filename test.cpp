#include <iostream>

int main()
{
	std::string str("hamid\n");
	for (char c : str)
		std::cout << (char)toupper(c);
}