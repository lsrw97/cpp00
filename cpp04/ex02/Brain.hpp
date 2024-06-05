#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string ideas[100];
    
    public:
        Brain();
        ~Brain();
        Brain(const Brain &cpy);
        Brain &operator=(const Brain &other);
};

#endif