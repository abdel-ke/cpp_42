#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int			_Hitpoints;
	int			_Enegy_point;
	int			_Attack_damage;
public:
	ClapTrap();
	ClapTrap(std::string);
	~ClapTrap();
	std::string getname() const;
	int		getAttackDamage() const;
	int		getEnergyPoint() const;
	void	setname(std::string);
	void	setAttackDamage(int);
	void	setEnergyPoint(int);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
