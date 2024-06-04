#include "ClapTrap.hpp"

int main ()


{
    ClapTrap a;
    ClapTrap b("B");
    a.attack("B");
    b.takeDamage(10);
    b.beRepaired(5);
    b.attack("A");

    return 0;
}