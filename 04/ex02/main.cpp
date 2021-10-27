
#include "headers/Animal.hpp"
#include "headers/Cat.hpp"
#include "headers/Dog.hpp"
#include "headers/Brain.hpp"

int main()
{
	Animal *catAnimal = new Cat();
	catAnimal->makeSound();
	std::cout << "_________________________";
	Animal *dogAnimal = new Dog();
	dogAnimal->makeSound(); 
	std::cout << "_________________________";
	delete catAnimal;
	delete dogAnimal;
}
