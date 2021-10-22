#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default DiamondTrap constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "Parameterised DiamondTrap constructor" << std::endl;
	this->_DiamondName = name;
	ClapTrap::_name = name + "_clap_name";
	this->_Hitpoints = FragTrap::_Hitpoints;
	this->_Enegy_point = FragTrap::_Enegy_point;
	this->_Attack_damage = FragTrap::_Attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	std::cout << "copy DiamondStrap called" << std::endl;
	*this = obj;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Nmae of DiamondTrap is: " << this->_DiamondName << std::endl
	<< "name of Claptrap is: " << this->_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "Assignment DiamondTrap operator called" << std::endl;
	if (this != &obj)
	{
		 this->_DiamondName = obj._DiamondName;
		 this->_name = obj._name;
		 this->_Attack_damage = obj._Attack_damage;
		 this->_Enegy_point = obj._Enegy_point;
		 this->_Hitpoints = obj._Hitpoints;
	}
	return *this;
}
