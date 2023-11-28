#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap1("Melissa");
    ClapTrap claptrap2("Soukeyna");
    ClapTrap claptrap4("Louisa");

    std::cout << "\n" << std::endl;

    claptrap1.attack("Soukeyna");
    claptrap2.takeDamage(5);
    claptrap2.beRepaired(10);

    std::cout << "\n" << std::endl;

    claptrap2.attack("Louisa");
    claptrap4.takeDamage(5);
    claptrap4.beRepaired(100);
    claptrap4.takeDamage(100);
    claptrap4.beRepaired(100);
    return 0;
}