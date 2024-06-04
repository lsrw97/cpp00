#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        std::string _name;
        int _hitpoints;
        int _energyPoints;
        int _attackDamage;

        ScavTrap();
    public:
        ~ScavTrap();
        ScavTrap(std::string name);

        void attack(const std::string &target);
        void guardGate();
};

#endif