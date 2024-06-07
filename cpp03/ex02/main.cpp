#include "FragTrap.hpp"

int main( void )
{
    FragTrap a( "Jonny" );

    a.attack( "Joe" );
    a.takeDamage( 10 );
    a.beRepaired( 10 );
    a.highFivesGuys();
    return 0;
}
