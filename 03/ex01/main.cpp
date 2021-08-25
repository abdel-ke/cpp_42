#include "ScavTrap.hpp"

int main()
{
    ScavTrap sv("scav_constructername");
    std::string test = "ref_to_target";
    sv.attack(test);
    sv.takeDamage(25);
    sv.beRepaired(75);
    return (0);
}