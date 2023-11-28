#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    health_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap " << name << " constructor is called" << std::endl;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destructor is called" << std::endl;

}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " has entered in Gate keeper mode" << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
    if (energy_points <= 0)
    {
        std::cout << "ScavTrap " << name << " has no energy to attack!" << std::endl;
        return ;
    }
    if (health_points <= 0)
    {
        std::cout << "ScavTrap " << name << " has no health_points to lose!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
    energy_points -= 1;
}