#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ScavTrap scav("Melissa");
    ScavTrap scav2("Sukeyna");
    scav.attack("Louisa");
    scav2.takeDamage(500);
    scav2.beRepaired(10);
    scav2.guardGate();
    return 0;
}