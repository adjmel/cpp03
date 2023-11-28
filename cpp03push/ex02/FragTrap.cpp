#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    health_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap " << name << " constructor is called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destructor is called" << std::endl;

}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " has done a high five" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (energy_points <= 0)
    {
        std::cout << "FragTrap " << name << " has no energy to attack!" << std::endl;
        return ;
    }
    if (health_points <= 0)
    {
        std::cout << "FragTrap " << name << " has no health_points to lose!" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
    energy_points -= 1;
}