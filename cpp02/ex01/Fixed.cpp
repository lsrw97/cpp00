#include "Fixed.hpp"
#include <iostream>
#include <iomanip>
#include <math.h>

Fixed::Fixed(const Fixed &fixed) : _number(fixed.getRawBits()) { std::cout << "Copy constructor called" << std::endl; }

Fixed::Fixed() : _number(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed &Fixed::operator=(const Fixed &fixed)
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

// The roundf() function rounds the argument to the nearest integer value, rounding halfway cases away from zero, regardless of the current rounding direction.

Fixed::Fixed(const float number)
{
    this->_number = roundf(number * (1 << this->_bits));
}

float Fixed::toFloat(void) const 
{
    // return (float)this->_number / (1 << this->_bits);
    return ((float)this->_number / (float)(1 << this->_bits));

    // return (float)(this->_number >> this->_bits);
}

int Fixed::toInt(void) const
{
    return this->_number >> this->_bits;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    // because std::ios default presicion is 6 you can expand it to 8 with std::setprecision(8) for example
    os << fixed.toFloat();
    return os;
}
