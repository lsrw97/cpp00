#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &other)
        _type = other._type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Wuff, Wuff! I am a good boy" << std::endl;
}
