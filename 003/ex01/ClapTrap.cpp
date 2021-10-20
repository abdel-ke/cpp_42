#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_Hitpoints = 10;
	_Enegy_point = 10;
	_Attack_damage = 0;
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_Hitpoints = 10;
	_Enegy_point = 10;
	_Attack_damage = 0;
	std::cout << "Parametrized constructor called" << std::endl;
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
