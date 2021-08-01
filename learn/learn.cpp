#include "learn.hpp"

int main()
{
	learn list[3];
	string str;
	int i = 0;

	list[0] = learn(0, "Abdelhamid", "EL KEMMAL");
	list[1] = learn(1, "NADA", "MACHTROUHI");
	list[2] = learn(2, "FUTURE IS LOADING", "1337");
	while (i < 3)
	{
		// cout << list[i]._id << "\t" << list[i]._first_name << "\t" << list[i]._last_name << endl;
		list[i].display();
		i++;
	}
}
