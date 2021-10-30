
#include "headers/Animal.hpp"
#include "headers/Cat.hpp"
#include "headers/Dog.hpp"
#include "headers/Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	{
		int size = 4;
		std::cout << "---------------Declaration--------------\n";
		Animal *animal[size];
		std::cout << "_________________________________________\n";
		for (int i = 0; i < size; i++)
		{
			if (i % 2 == 0)
			{
				std::cout << "--------------------CAT-------------------\n";
				animal[i] = new Cat();
			}
			else
			{
				std::cout << "--------------------DOG-------------------\n";
				animal[i] = new Dog();
			}
		}
		std::cout << "--------------------DESTRUCTOR-------------------\n";
		for (int i = 0; i < size; i++)
		{
			delete animal[i];
			std::cout << "---------------------------------------\n";
		}
	}
	{
		std::cout << "-----------------DEEP CAT----------------------\n";
		Cat c1;
		std::cout << "\e[1;34msetBrain Charlie of C1 and getBrain C1(Charlie)\e[0m\n";
		c1.setBrain("Charlie");
		c1.getBrain();

		Cat c2 = c1;
		std::cout << "\e[1;34mgetBrain C2(Charlie)	(C2 = C1)\e[0m\n";
		c2.getBrain();
		std::cout << "\e[1;34msetBrain Lucy of C2 and getBrain C1(Charlie)\e[0m\n";
		c2.setBrain("Lucy");
		c1.getBrain();
		std::cout << "\e[1;34mgetBrain C2(Lucy)\e[0m\n";
		c2.getBrain();
	}
	{
		std::cout << "-----------------DEEP DOG----------------------\n";
		Dog d1;
		std::cout << "\e[1;34msetBrain Charlie of d1 and getBrain d1(Charlie)\e[0m\n";
		d1.setBrain("Charlie");
		d1.getBrain();

		Dog d2 = d1;
		std::cout << "\e[1;34mgetBrain d2(Charlie)	(d2 = d1)\e[0m\n";
		d2.getBrain();
		std::cout << "\e[1;34msetBrain Lucy of d2 and getBrain d1(Charlie)\e[0m\n";
		d2.setBrain("Lucy");
		d1.getBrain();
		std::cout << "\e[1;34mgetBrain d2(Lucy)\e[0m\n";
		d2.getBrain();
	}
	//should not create a leak
	delete i;
	delete j;
}
