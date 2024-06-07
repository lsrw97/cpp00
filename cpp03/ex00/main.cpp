#include "ClapTrap.hpp"

int main ()

{
    ClapTrap a;
    ClapTrap b("B");
    ClapTrap c(b);
    a.attack("B");
    b.takeDamage(111);
    b.beRepaired(5);
    b.attack("A");

    return 0;
}
