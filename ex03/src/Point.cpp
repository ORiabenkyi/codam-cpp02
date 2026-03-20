#include "../inc/Point.hpp"
#include <iostream>

Point::Point() : x(0), y(0) {
    // std::cout << "Point default constructor called" << std::endl;
}  

Point::Point(const Fixed &x, const Fixed &y) : x(x), y(y) {
    // std::cout << "Point parameterized constructor called" << std::endl;
}

Point& Point::operator=(const Point &otherPoint) {
    // std::cout << "Point assignment operator called" << std::endl;
    if (this != &otherPoint) {
        // Since x and y are const, we cannot assign to them after initialization.
        // This means that the assignment operator cannot actually change the values of x and y.
        // We can only return *this without modifying the members.
    }
    return *this;
}

Point Point::operator-(const Point &otherPoint) const 
{
    // std::cout << "Point subtraction operator called" << std::endl;
    return Point(this->x - otherPoint.x, this->y - otherPoint.y);
}

Point::~Point() {
    // std::cout << "Point destructor called" << std::endl;
}

Fixed Point::getX() const {
    return this->x;
}

Fixed Point::getY() const {
    return this->y;
}

std::ostream& operator<<(std::ostream& out, const Point& fp) {
    out << " Point (" << fp.getX() << ", " << fp.getY() << ")";
    return out;
}
