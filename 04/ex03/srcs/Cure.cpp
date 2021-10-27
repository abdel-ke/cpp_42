#include "../headers/Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure default constructor" << std::endl;
	this->_type = "Cure";
}

Cure::Cure(const Cure &obj)
{
	std::cout << "Cure Copy constructor" << std::endl;
	*this = obj;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor";
}

Cure	&Cure::operator = (const Cure &obj)
{
	std::cout << "Cure assignment operator" << std::endl;
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

AMateria	*AMateria::clone() const
{
	return new Cure();
}

