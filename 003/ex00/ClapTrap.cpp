#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _Hitpoints(10), _Enegy_point(10), _Attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Parametrized constructor called" << std::endl;
}

std::string	ClapTrap::getname() const
{
	return this->_name;
}

int	ClapTrap::getAttackDamage() const
{
	return this->_Attack_damage;
}

int	ClapTrap::getEnergyPoint() const
{
	return this->_Enegy_point;
}

void	ClapTrap::setname(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setAttackDamage(int ADamage)
{
	this->_Attack_damage = ADamage;
}

void	ClapTrap::setEnergyPoint(int ADamage)
{
	this->_Enegy_point += ADamage;
}

void	ClapTrap::attack(std::string const &target)
{
	//ClapTrap <name> attack <target>, causing <damage> points of damage!
	std::cout << "ClapTrap " << getname() << " attack " << target << " causing "
	<< _Attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	setEnergyPoint(amount);
}
