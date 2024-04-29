#include "Fixed.hpp"
#include <iostream>


Fixed::Fixed(const Fixed& fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_number = fixed.getRawBits();
};

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_number = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
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

Fixed::Fixed(const int number)
{
    this->_number = number << this->_bits;
}

Fixed::Fixed(const float number)
{
    this->_number = (int)roundf(number * (1 << this->_bits));
}

float Fixed::toFloat(void) const
{
    return (float)this->_number / (1 << this->_bits);
}

int Fixed::toInt(void) const
{
    return this->_number >> this->_bits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
