
#ifndef TEST_HPP
#define TEST_HPP

#include <iostream>

class test
{
	private:
		int x;
		int y;
		int z;
	public:
		test(int a = 0, int b = 0, int c = 0);
		void geter();
		bool operator==(test a);
		test operator=(test a);
};

#endif
