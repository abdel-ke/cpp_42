#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str("abdelhamid el kemmal"),
			s1("elhamid"),
			s2("emma");
	int	first = str.find(s1);
		// last = str.find(s2, 7);//s1.length() - 1);
	str.erase(first, s1.length());
	// str.append(s2, s2.length());
	str.insert(first, s2);
	cout << str << " " << first << endl;
}