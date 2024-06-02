#include "ClapTrap.hpp"

// getters

// int ClapTrap::getHitpoints() const
// {
//     return _hitpoints;
// }

// int ClapTrap::getEnergyPoints() const
// {
//     return this->_energyPoints;
// }

// int ClapTrap::getAttackDamage() const
// {
//     return this->_attackDamage;
// }

// std::string ClapTrap::getName() const
// {
//     return this->_name;
// }

//constructors and destructors

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << _name << " was created " << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << _name << " was destroyed " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
    this->_name = cpy._name;
    this->_hitpoints = cpy._hitpoints;
    this->_energyPoints = cpy._energyPoints;
    this->_attackDamage = cpy._attackDamage;
}

void ClapTrap::attack(std::string const &target)
{
    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy points left to attack " << target << std::endl;
        return;
    }
    _energyPoints -= 1;
    std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitpoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
        return;
    }
    _hitpoints -= amount;
    std::cout << "ClapTrap " << _name << " take " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitpoints == 10)
    {
        std::cout << "ClapTrap " << _name << " is already at full health" << std::endl;
        return;
    }
    _hitpoints += amount;
    if (_hitpoints > 10)
    {
        amount = 10 - _hitpoints;
        _hitpoints = 10;
    }
    std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points of health!" << std::endl;
    _energyPoints--;
}