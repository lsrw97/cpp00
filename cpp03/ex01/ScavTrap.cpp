#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    this->_hitpoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    this->_name = name;
    std::cout << _name << " was created " << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << _name << " was destroyed " << std::endl;
}