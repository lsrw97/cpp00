#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
    std::cout << "Dog copy constructor called" << std::endl;
}

void Dog::setIdea(std::string idea)
{
    for(int i = 0; i < 100; i++)
    {
        if (this->_brain->getIdea(i) == "")
        {
            this->_brain->getIdea(i) = idea;
            break;
        }
    }
    std::cout << "Brain is full of Ideas!" << std::endl;
}

void Dog::printIdeas() const
{
    for (int i = 0; i < 100; i++)
    {
        if (this->_brain->getIdea(i) != "")
            std::cout << this->_brain->getIdea(i) << std::endl;
    }
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
