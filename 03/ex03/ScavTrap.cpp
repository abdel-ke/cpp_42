#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_Hitpoints = 100;
	this->_Enegy_point = 50;
	this->_Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Parameterised ScavTrap constructor called" << std::endl;
	this->_name = name;
	this->_Hitpoints = 100;
	this->_Enegy_point = 50;
	this->_Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	std::cout << "Copy ScavTrap Constructor called" << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "Assignment ScavTrap operator called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_Attack_damage = obj._Attack_damage;
		this->_Enegy_point = obj._Enegy_point;
		this->_Hitpoints = obj._Hitpoints;
	}
	return *this;
}

void	ScavTrap::guardGate()
{
	std::cout << "GuardGate called" << std::endl;
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << _name << " attack " << target << " causing "
	<< _Attack_damage << " points of damage!" << std::endl;
}
