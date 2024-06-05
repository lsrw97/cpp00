#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat &cpy);
        Cat &operator=(const Cat &other);

        void makeSound() const;
};

#endif