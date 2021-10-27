#include "../headers/AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Amateria efault constructor" << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
	std::cout << "AMateria copy constructor" << std::endl;
	*this = obj;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor" << std::endl;
}

AMateria	&AMateria::operator = (const AMateria &obj)
{
	std::cout << "AMateria assignment operator" << std::endl;
	if (this != &obj)
	{
		this->_type = "NULL";
	}
	return *this;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria parametrised" << std::endl;
	this->_type = type;
}
