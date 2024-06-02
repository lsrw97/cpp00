#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    private:
        int _number;
        static const int _bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& fixed);
        Fixed& operator= (const Fixed &fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif