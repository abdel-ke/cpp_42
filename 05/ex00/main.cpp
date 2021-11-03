#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b1("Bureau1", 10);
		b1.incHigh();
		std::cout << b1 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
