#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string _name;
        int _hitpoints;
        int _energyPoints;
        int _attackDamage;

    public:
        ~ClapTrap();
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &cpy);
        ClapTrap &operator=(const ClapTrap &other);

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif