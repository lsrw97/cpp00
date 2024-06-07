#include "ClapTrap.hpp"

// getters

//constructors and destructors

ClapTrap::ClapTrap() : _name("default")
{
    this->_hitpoints = 100;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "ClapTrap " << _name << " was created " << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hitpoints = 100;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "ClapTrap " << _name << " was created - clap" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " was destroyed - clap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
    std::cout << "clapTrap copy constructor called " << cpy._name << std::endl;
    this->_name = cpy._name;
    this->_hitpoints = cpy._hitpoints;
    this->_energyPoints = cpy._energyPoints;
    this->_attackDamage = cpy._attackDamage;
}

void ClapTrap::attack(std::string const &target)
{
    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy points left to attack " << target <<  " -- Energy points: " << _energyPoints << std::endl;
        return;
    }
    _energyPoints -= 1;
    std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << " -- Energy points left: " << _energyPoints << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitpoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
        return;
    }
    _hitpoints -= amount;
    if (_hitpoints < 0)
        _hitpoints = 0;
    std::cout << "ClapTrap " << _name << " take " << amount << " points of damage!" <<  " -- Hitpoints left: " << _hitpoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitpoints == 100)
    {
        std::cout << "ClapTrap " << _name << " is already at full health" <<  " -- Hitpoints: " << _hitpoints << std::endl;
        return;
    }
    _hitpoints += amount;
    if (_hitpoints > 100)
    {
        amount = 100 - _hitpoints;
        _hitpoints = 100;
    }
    std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points of health!" << " -- Hitpoints: " << _hitpoints << std::endl;
    _energyPoints--;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    this->_name = other._name;
    this->_hitpoints = other._hitpoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return *this;
}
