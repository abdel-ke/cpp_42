#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor calles\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Desctructor called\n";
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "Copy ScavTrap called\n";
}
