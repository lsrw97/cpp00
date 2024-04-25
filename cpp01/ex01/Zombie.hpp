#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie 
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void announce();
        void setName(std::string name);
        std::string getName();
};

Zombie* zombieHorde( int N, std::string name);
#endif