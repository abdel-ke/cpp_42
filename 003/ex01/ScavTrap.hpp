#include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
	private:
		std::string	_name;
	public:
		ScavTrap();
		ScavTrap(std::string);
		~ScavTrap();
};