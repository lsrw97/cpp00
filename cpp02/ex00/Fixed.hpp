#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    private:
        int number;
        static const int bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& fixed);
        // copy assignment operator overload
        Fixed& operator= (const Fixed &fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif