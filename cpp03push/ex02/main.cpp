#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap scav("Melissa");
    FragTrap frag("Louisa");
    scav.attack("Sukeyna");
    scav.takeDamage(10);
    scav.beRepaired(10);
    scav.guardGate();

    frag.attack("Sukeyna");
    frag.takeDamage(10);
    frag.beRepaired(10);
    frag.highFivesGuys();
    return 0;
}