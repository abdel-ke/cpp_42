#include "../headers/Cat.hpp"

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
	std::cout << "Cat Assignment Constructor" << std::endl;
	if (this != &obj)
	{
		this->_type = "Cat";
		this->br = new Brain();
		*this->br = *obj.br;
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

void	Cat::getBrain(void) const
{
	const std::string *str = this->br->getbrain();
	for (int i = 0; i < 100; i++)
		std::cout << str[i] << std::endl;
}


void	Cat::setBrain(std::string str)
{
	this->br->setbrain(str);
}