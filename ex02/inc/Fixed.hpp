
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

        //operators
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    Fixed& operator++(); 
    Fixed operator++(int); 
    Fixed& operator--();   
    Fixed operator--(int); 

    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);    

    friend std::ostream& operator<<(std::ostream& out, const Fixed& fp);


};

#endif