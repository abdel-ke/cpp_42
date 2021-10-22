#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	_Hitpoints = 10;
	_Enegy_point = 10;
	_Attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Parametrized constructor called" << std::endl;
	_name = name;
	_Hitpoints = 10;
	_Enegy_point = 10;
	_Attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = obj;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "Assignment Operator called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_Attack_damage = obj._Attack_damage;
		this->_Enegy_point = obj._Enegy_point;
		this->_Hitpoints = obj._Hitpoints;
	}
	return *this;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << _name << " attack " << target << " causing "
	<< _Attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "takeDamage called with amount: " << amount << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "beRepaired Called with amount: " << amount << std::endl;
}

void	ClapTrap::setname(std::string name)
{
	this->_name = name;
}
