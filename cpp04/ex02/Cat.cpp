#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal() {
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat constructor called!" << std::endl;
}

Cat::~Cat(){
    delete(this->_brain);
    std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat(const Cat &cpy) : Animal(cpy) {
    this->_brain = new Brain(*cpy._brain);
    this->_type = cpy._type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &other)
    {
        _type = other._type;
        delete(this->_brain);
        this->_brain = new Brain(*other._brain);
    }
    return *this;
}

void Cat::setIdea(std::string idea)
{
    for(int i = 0; i < 100; i++)
    {
        if (this->_brain->getIdeas(i) == "")
        {
            this->_brain->setIdea(i, idea);
            std::cout << " Idea at index " << i << std::endl;
            return ;
        }
    }
    std::cout << "Brain is full of Ideas!" << std::endl;
}

void Cat::printIdeas() const
{
    for (int i = 0; i < 100; i++)
    {
        if (this->_brain->getIdeas(i) != "")
            std::cout << this->_brain->getIdeas(i) << std::endl;
    }
}

void Cat::makeSound() const {
    std::cout << "Miaou Miaou! I am a good cat" << std::endl;
}
