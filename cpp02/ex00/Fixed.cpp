#include "Fixed.hpp"
#include <iostream>


Fixed::Fixed(const Fixed& fixed) : _number(fixed.getRawBits()) { std::cout << "Copy constructor called" << std::endl; }

Fixed::Fixed() : _number(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed& Fixed::operator= (const Fixed &fixed)
{
    std::cout << "Copy assignation operator called" << std::endl;
    if (this != &fixed)
        this->_number = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_number;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_number = raw;
}
