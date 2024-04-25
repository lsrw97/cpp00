#include "Zombie.hpp"
#include <iostream>

std::string Zombie::getName()
{
    return this->name;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void Zombie::announce ()
{
    std::cout << this->getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->getName() << " died..." << std::endl;
}