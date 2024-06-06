#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string _type;
        Brain *_brain;

    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &cpy);
        Animal &operator=(const Animal &other);

        std::string getType() const;
        virtual void makeSound() const;
};

#endif