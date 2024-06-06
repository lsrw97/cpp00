#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap was created - Scav -" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << _name << " was created and is ready! - Scav - " << "Hitpoints: " << _hitpoints<< std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << _name << " was destroyed - Scav -" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "Copy constructor called - Scav -" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "Assignation operator called - Scav -" << std::endl;
    if (this == &other)
        return *this;
    _name = other._name;
    _hitpoints = other._hitpoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    if (_energyPoints == 0)
    {
        std::cout << "ScavTrap " << _name << " has no energy points left to attack " << target <<  " -- Energy points: " << _energyPoints << std::endl;
        return;
    }
    _energyPoints -= 1;
    std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << " -- Energy points left: " << _energyPoints << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode" << std::endl;
}
