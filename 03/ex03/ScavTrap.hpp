#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string);
		ScavTrap(const ScavTrap &);
		~ScavTrap();
		ScavTrap &operator = (ScavTrap const &);
		void attack(const std::string &);
		void guardGate(); 
};

#endif
