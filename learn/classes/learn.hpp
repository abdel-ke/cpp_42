#include <iostream>
// #include <climits>
// #include <cctype>
// #include <cstring>
// #include <cstdlib>
// #include <iomanip>
#include "color.h"

using namespace std;

class learn
{
	public:
		string test;
		learn();
		learn(int id, string first_name, string last_name);
		void	display();
		// learn() {};
	private:
		int			_id;
		string _first_name;
		string _last_name;
};

learn::learn()
{
	cout << "HELLO IM DEFAULT CONSTRUCTOR\n";
}

learn::learn(int id, string first_name, string last_name)
{
	this->_id = id;
	this->_first_name = first_name;
	this->_last_name = last_name;	
}

void	learn::display()
{
	cout << this->_id << "\t" << this->_first_name << "\t" << this->_last_name << endl;
}