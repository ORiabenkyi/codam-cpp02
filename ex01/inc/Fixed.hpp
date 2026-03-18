
#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>  

class Fixed {
   private:
    int value;
    static const int storedBits = 8;

   public:
    Fixed();
    Fixed(int const raw);
    Fixed(float const raw);
    ~Fixed();
    Fixed(const Fixed &otherFixed);

    public:
    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;
    Fixed& operator=(const Fixed &otherFixed);
    friend std::ostream& operator<<(std::ostream& out, const Fixed& fp);

};

#endif