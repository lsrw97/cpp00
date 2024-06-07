#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"

class Dog : public Animal
{
    private:
        Brain *_brain;

    public:
        Dog();
        ~Dog();
        Dog(const Dog &cpy);
        Dog &operator=(const Dog &other);
        void setIdea(std::string idea);
        void printIdeas() const;

        void makeSound() const;
};

#endif
