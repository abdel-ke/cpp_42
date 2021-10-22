#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string);
		FragTrap(const FragTrap &);
		FragTrap &operator=(const FragTrap &);
		~FragTrap();
		void highFivesGuys(void);
		void attack(std::string const & target);
};
