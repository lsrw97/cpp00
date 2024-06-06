#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

// redefined functions, without the virtual keyword are bound at compile time
// that means that at compile time the function is set in stone. 
//means that all the references like dog or cat will use the Aminal method definitions

// to fix this we need to use the virtual keyword in the base class
// now the type of binding is dynamic, which means that the function is resolved at runtime
// instead of redifining we are overriding the function

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        ~Animal();
        Animal(const Animal &cpy);
        Animal &operator=(const Animal &other);

        std::string getType() const;
        void makeSound() const;
};

#endif