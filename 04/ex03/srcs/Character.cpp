#include "../headers/Character.hpp"

Character::Character() : _counter(0)
{
	std::cout << "Character default constructor" << std::endl;
}

Character::Character(std::string name): _name(name)
{
	std::cout << "Character parametrized constructor" << std::endl;
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
	if (_counter < 4)
		_inventory[_counter++] = m;
	else
		std::cout << "FULL INVENTORY" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx > -1 && idx < 4 && idx < _counter)
	{
		_inventory[idx] = NULL;
		for (int i = idx; i < _counter - 1; i++)
			_inventory[i] = _inventory[i + 1];
		_inventory[_counter] = NULL;
		_counter--;
	}
	else
		std::cout << "idx not exist!!" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	 if (idx > -1 && idx < 4)
	 	this->_inventory[idx]->use(target);
	else
		std::cout << "idx not exist!!" << std::endl;
}
