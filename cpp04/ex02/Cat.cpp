#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal() {
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat constructor called!" << std::endl;
}

Cat::~Cat() {
    delete _brain;
    std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat(const Cat &cpy) : Animal(cpy) {
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &other)
        _type = other._type;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Miaou Miaou! I am a good cat" << std::endl;
}