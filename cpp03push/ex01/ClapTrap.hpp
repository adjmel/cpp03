#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        unsigned int health_points;
        unsigned int energy_points;
        unsigned int attack_damage;
        std::string name;

        
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &obj);
        ClapTrap &operator=(const ClapTrap& obj);
        
        void attack(const std::string& target);
        void takeDamage(unsigned int damage_amount);
        void beRepaired(unsigned int repaired_amount);
};

#endif