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

};
    std::ostream& operator << (std::ostream& os, const Fixed& fixed);

#endif