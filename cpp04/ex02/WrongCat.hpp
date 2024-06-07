#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat(const WrongCat &cpy);
        WrongCat &operator=(const WrongCat &other);
        virtual ~WrongCat();

        void makeSound() const;
};

#endif