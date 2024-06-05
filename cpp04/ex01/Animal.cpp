#include "Animal.hpp"


Animal::Animal() : _type("Animal") {
    std::cout << "Animal constructor called!" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called!" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Animal assignation operator called!" << std::endl;
    if (this != &copy)
        _type = copy._type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called!" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound!" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}