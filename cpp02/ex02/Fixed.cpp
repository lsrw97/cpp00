#include "Fixed.hpp"
#include <iostream>
#include <iomanip>
#include <math.h>

Fixed::Fixed(const Fixed &fixed) : _number(fixed.getRawBits())
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed() : _number(0)
{
    std::cout << "Default constructor called" << std::endl;
}

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



// comparison < <= > >= == !=

bool Fixed::operator<(const Fixed &fixed)
{
    return this->_number < fixed.getRawBits();
}

bool Fixed::operator>(const Fixed &fixed)
{
    return this->_number > fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed)
{
    return this->_number <= fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed)
{
    return this->_number >= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed)
{
    return this->_number == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed)
{
    return this->_number != fixed.getRawBits();
}

// arithmetic + - * /

Fixed Fixed::operator+(const Fixed &fixed)
{
    return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed)
{
    return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed)
{
    return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed)
{
    return Fixed(this->toFloat() / fixed.toFloat());
}

// increment and decrement operators

Fixed& Fixed::operator++(void)
{
    this->_number++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this; // Save the current state
    ++_number;              // Increment the value
    return temp;          // Return the old state
}

Fixed& Fixed::operator--(void)
{
    this->_number--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this; // Save the current state
    --_number;              // Decrement the value
    return temp;          // Return the old state
}

// min and max
// normal

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    return a < b ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return a > b ? a : b;
}

// const

Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
    return a.getRawBits() < b.getRawBits() ? (Fixed&)a : (Fixed&)b;
}

Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
    return a.getRawBits() > b.getRawBits() ? (Fixed&)a : (Fixed&)b;
}