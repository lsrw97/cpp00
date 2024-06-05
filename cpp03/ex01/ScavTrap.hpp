#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string name);

        void attack(const std::string &target);
        void guardGate();
};

#endif