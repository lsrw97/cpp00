#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon* weapon)
{
    this->name = name;
    this->weapon = weapon;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}