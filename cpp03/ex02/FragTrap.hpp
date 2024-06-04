#ifndef FragTrap_HPP
#define FragTrap_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        std::string _name;
        int _hitpoints;
        int _energyPoints;
        int _attackDamage;

        FragTrap();
    public:
        ~FragTrap();
        FragTrap(std::string name);

        void highFivesGuys(void);
};

#endif