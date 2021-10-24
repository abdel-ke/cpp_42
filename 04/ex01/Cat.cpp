#include "headers/Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default Constructor" << std::endl;
	this->_type = "Cat";
	this->br = new Brain();
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	*this = obj;
}

Cat	&Cat::operator = (const Cat &obj)
{
	if (this != &obj)
	{
		this->_type = "Cat";
		this->br = new Brain();
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
	delete br;
}

void	Cat::makeSound() const
{
	std::cout << "The Cat make sound!" << std::endl;
}
