#include "test.hpp"

test::test(int a, int b, int c): x(a), y(b), z(c)
{

}

void test::geter()
{
	std::cout << x << " " << y << " " << z << std::endl;
}

bool test::operator==(test t)
{
	if (t.x == this->x)
	{
		std::cout << "TRUE\n";
		return (true);
	}
	else 
	{
		std::cout << "FALSE\n";
		return false;
	}
}

test test::operator=(test t)
{
	if (t.x == this->x)
	{
		std::cout << "TRUE\n";
		return t;
	}
	else 
	{
		std::cout << "FALSE\n";
		return NULL;
	}
}

#define	COUT(X) std::cout << X << std::endl;

int main()
{
	COUT(5);
	// test t1(0,1,2), t2(0, 5, 6);
	// t1 = t2;
	// t1.geter();
	// t2.geter();
}
