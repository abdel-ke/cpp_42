#include "../headers/Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor" << std::endl;
}

Character::Character(std::string name): _name(name)
{
	std::cout << "Character default constructor" << std::endl;
}

Character::Character(const Character &obj)
{
	std::cout << "Character Copy constructor" << std::endl;
	*this = obj;
}

Character::~Character()
{
	std::cout << "Character Destructor";
}

Character		&Character::operator = (const Character &obj)
{
	std::cout << "Character assignment operator" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
	}
	return *this;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{

}
