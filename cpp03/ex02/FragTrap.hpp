#ifndef FragTrap_HPP
#define FragTrap_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string name);

        void highFivesGuys(void);
};

#endif