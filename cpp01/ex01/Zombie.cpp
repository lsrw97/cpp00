#include "Zombie.hpp"
#include <iostream>

std::string Zombie::getName()
{
    return this->name;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie::Zombie()
{
}

void Zombie::announce ()
{
    std::cout << this->getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->getName() << " died..." << std::endl;
}