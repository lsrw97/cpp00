#include "Zombie.hpp"

int main()
{
    Zombie* z = newZombie("Zombie1");
    randomChump("Zombie2");
    z->announce();
    delete z;
}
