#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_hitpoints = 10;
	this->_energy = 10;
	this->_damage = 0;
	std::cout << "Default Constructor\n";
	std::cout << "Hit point " << this->_hitpoints << std::endl;
	std::cout << "Energy " << this->_energy << std::endl;
	std::cout << "Damage " << this->_damage << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}

void	ClapTrap::attack(std::string const & target)
{
	//ClapTrap <name> attack <target>, causing <damage> points of damage!
	std::cout << "ClapTrap " << this->_name << " atack " << target << ", causing "
			<< this->_damage << " point of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	// this->_damage = amount;
	std::cout << "ClapTrap take damage " << amount << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	// ClapTrap();
	std::cout << "beRepaired Called with amount: " << amount << std::endl;
}
