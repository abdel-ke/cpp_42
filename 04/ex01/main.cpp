
#include "headers/Animal.hpp"
#include "headers/Cat.hpp"
#include "headers/Dog.hpp"
#include "headers/Brain.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		{
			int size = std::stoi(av[1]);
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
			
		}

	}
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << "-------------------------------------\n";
	// delete i;
	// delete j;//should not create a leak
}