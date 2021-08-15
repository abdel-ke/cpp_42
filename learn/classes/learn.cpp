#include "learn.hpp"
// #include <vector>
#include <list>

using namespace std;

int main()
{
	list<string> str = {"hamid", "khalid", "rachid", "hanan"};
	int n[] = {5, 4, 3 , 2 , 1};
	str.push_back("HELLO");
	
	for (string s : str)
		cout << "STR: " << s << endl;
}
