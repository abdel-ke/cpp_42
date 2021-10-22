#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
// #include "Cat.hpp"
// #include "Dog.hpp"

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const Animal &);
		~Animal();
		Animal &operator = (const Animal &);
		void	makeSound() const;
		std::string	getType() const;
};

#endif
