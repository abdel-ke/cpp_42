#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    // ClapTrap C_instance0;
    // ClapTrap C_instance1("claptrap");
    // ClapTrap C_instance2(C_instance1);
    // C_instance2.attack("target");
    // C_instance2.takeDamage(30); 
    // C_instance2.beRepaired(20);

    // std::cout << "------------------------------------------" << std::endl;

    // ScavTrap S_instance0;
    // ScavTrap S_instance1("scavtrap");
    // ScavTrap S_instance2(S_instance1);
    // S_instance2.guardGate();

    // std::cout << "------------------------------------------" << std::endl;
    
    // FragTrap F_instance0;
    // FragTrap F_instance1("fragtrap");
    // FragTrap F_instance2(F_instance1);
    // F_instance2.highFivesGuys();

    
    std::cout << "------------------------------------------" << std::endl;
    DiamondTrap instance0;
    DiamondTrap D_instance1("diamondtrap");
    DiamondTrap diamondtrap(D_instance1);
    diamondtrap.attack("target");
    diamondtrap.takeDamage(50);
    diamondtrap.beRepaired(40);
    diamondtrap.highFivesGuys();
    diamondtrap.guardGate();
    diamondtrap.whoAmI();
    std::string target = "Scavtrap";
    D_instance1.attack(target);
}
