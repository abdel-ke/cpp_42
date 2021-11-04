#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat school("school", 15);
		std::cout << school << std::endl;
		school.incGrade();
		std::cout << school << std::endl;
		school.decGrade();
		std::cout << school << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "________________________________\n";
	try
	{
		Bureaucrat school("school", -5);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "________________________________\n";
	try
	{
		Bureaucrat school("school", 200);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "________________________________\n";
	try
	{
		Bureaucrat school("school", 1);
		std::cout << school << std::endl;
		school.incGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "________________________________\n";
	try
	{
		Bureaucrat school("school", 150);
		std::cout << school << std::endl;
		school.decGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "________________________________\n";
}
