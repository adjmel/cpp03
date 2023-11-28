#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default")
{
    std::cout <<  "ClapTrap " << name << " constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
    health_points = 10;
    energy_points = 10;
    attack_damage = 0;
    std::cout  << "ClapTrap " << name << " constructor is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    *this = obj;
    std::cout << "ClapTrap " << name << " copy constructor called" << std::endl;
    return;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& obj) 
{
    this->name = obj.name;
    this->health_points = obj.health_points;
    this->energy_points = obj.energy_points;
    this->attack_damage = obj.attack_damage;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (energy_points <= 0)
    {
        std::cout << "ClapTrap " << name << " has no energy to attack!" << std::endl;
        return ;
    }
    if (health_points <= 0)
    {
        std::cout << "ClapTrap " << name << " has no health_points to lose!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
    energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int damage_amount)
{
    if (health_points <= damage_amount)
    {
        std::cout << "[number of health_points and damage_amount for " << name << " : " << health_points << " & " << damage_amount << "]" << std::endl;
        health_points = 0;
        std::cout << "ClapTrap " << name << " is dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " takes " << damage_amount << " points of damage!" << std::endl;
    health_points -= damage_amount;
}

void ClapTrap::beRepaired(unsigned int repaired_amount)
{
    if (energy_points <= 0 || health_points <= 0)
    {
        std::cout << "[number of health_points and energy_points for " << name << " : " << health_points << " & " << energy_points << "]" << std::endl;
        std::cout << "ClapTrap " << name << " has no energy or health points, she can't do anything!" << std::endl;
        return ;
    }
    
    if (health_points + repaired_amount > 10)
    {
        std::cout << "[number of health_points and repaired_amount for " << name << " : " << health_points << " & " << repaired_amount << "]" << std::endl;
        std::cout << "ClapTrap " << name << " has too much healthpoints!" << std::endl;
        health_points = 10;
        return ;
    }
    std::cout << "ClapTrap " << name << " is repaired by " << repaired_amount << " points!" << std::endl;
    health_points += repaired_amount;
    energy_points -= 1;
}