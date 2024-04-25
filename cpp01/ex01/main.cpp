#include "Zombie.hpp"

int main()
{
    Zombie* z = zombieHorde(5, "Zombie");
    delete[] z;
}
