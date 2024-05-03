#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int                 _number;
        static const int    _bits = 8;
    public:
        Fixed();
        Fixed(const int _number);
        Fixed(const float _number );
        ~Fixed();
        Fixed(const Fixed& fixed);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        
        float   toFloat (void) const;
        int     toInt (void) const;
        
        Fixed& operator= (const Fixed &fixed);

        // comparison operators

        bool operator > (const Fixed &fixed);
        bool operator < (const Fixed &fixed);
        bool operator >= (const Fixed &fixed);
        bool operator <= (const Fixed &fixed);
        bool operator == (const Fixed &fixed);
        bool operator != (const Fixed &fixed);

        // arithmetic operators

        Fixed operator + (const Fixed &fixed);
        Fixed operator - (const Fixed &fixed);
        Fixed operator * (const Fixed &fixed);
        Fixed operator / (const Fixed &fixed);

        // increment and decrement operators

        Fixed& operator ++ (void);
        Fixed operator ++ (int);
        Fixed& operator -- (void);
        Fixed operator -- (int);

        // min and max

        static Fixed& min(Fixed const &a, Fixed const &b);
        static Fixed& min(Fixed &a, Fixed &b);
        static Fixed& max(Fixed const &a, Fixed const &b);
        static Fixed& max(Fixed &a, Fixed &b);

        

};
    std::ostream& operator << (std::ostream& os, const Fixed& fixed);

#endif