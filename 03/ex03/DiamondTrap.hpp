#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_DiamondName;
	public:
		DiamondTrap();
		DiamondTrap(std::string);
		DiamondTrap(const DiamondTrap &);
		~DiamondTrap();
		DiamondTrap	&operator=(const DiamondTrap &);
		void whoAmI();
		using ScavTrap::attack;
};

#endif
