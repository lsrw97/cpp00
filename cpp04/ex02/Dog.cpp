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
    delete (this->_brain);
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
    this->_brain = new Brain(*cpy._brain);
    this->_type = cpy._type;
    std::cout << "Dog copy constructor called" << std::endl;
}

void Dog::setIdea(std::string idea)
{
    for (int i = 0; i < 100; i++)
    {
        if (this->_brain->getIdeas(i) == "")
        {
            this->_brain->setIdea(i, idea);
            std::cout << " Idea at index " << i << std::endl;
            return;
        }
    }
    std::cout << "Brain is full of Ideas!" << std::endl;
}

void Dog::printIdeas() const
{
    for (int i = 0; i < 100; i++)
    {
        if (this->_brain->getIdeas(i) != "")
            std::cout << this->_brain->getIdeas(i) << std::endl;
    }
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &other)
    {
        _type = other._type;
        delete (this->_brain);
        this->_brain = new Brain(*other._brain);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Wuff, Wuff! I am a good boy" << std::endl;
}
