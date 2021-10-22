#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string	_name;
	int			_Hitpoints;
	int			_Enegy_point;
	int			_Attack_damage;
public:
	ClapTrap();
	ClapTrap(std::string);
	ClapTrap(ClapTrap const &);
	~ClapTrap();
	ClapTrap &operator = (ClapTrap const &);
	void setname(std::string name);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
