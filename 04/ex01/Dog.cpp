#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default Constructor" << std::endl;
	this->_type = "Dog";
	this->br = new Brain();
}

Dog::Dog(const Dog &obj)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	*this = obj;
}

Dog	&Dog::operator = (const Dog &obj)
{
	if (this != &obj)
		this->_type = "Dog";
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
	delete br;
}
