#include "learn.hpp"

string	width(string str)
{
	if (str.length() >= 10)
	{
		str.erase(str.begin() + 9, str.end());
		str.append(".");
	}
	return str;
}

int main()
{
	string command;
	int nbr;

	int i = 0;
	std::getline(std::cin, command);
	// command = width(command);
	std::cout << width(command);
	// std::cout << command;
	// learn list[3];
	// string str;
	// int i = 0;

	// list[0] = learn(0, "Abdelhamid", "EL KEMMAL");
	// list[1] = learn(1, "NADA", "MACHTROUHI");
	// list[2] = learn(2, "FUTURE IS LOADING", "1337");
	// while (i < 3)
	// {
	// 	// cout << list[i]._id << "\t" << list[i]._first_name << "\t" << list[i]._last_name << endl;
	// 	list[i].display();
	// 	i++;
	// }
}
	