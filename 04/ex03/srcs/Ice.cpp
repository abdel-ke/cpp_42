#include "../headers/Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice default constructor" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice &obj)
{
	std::cout << "Ice Copy constructor" << std::endl;
	*this = obj;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor";
}

Ice		&Ice::operator = (const Ice &obj)
{
	std::cout << "Ice assignment operator" << std::endl;
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

AMateria	*AMateria::clone() const
{
	return new Ice();
}
