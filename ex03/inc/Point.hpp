#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point {
   private:
    const Fixed x;
    const Fixed y;

   public:
    Point();
    Point(const Fixed &x, const Fixed &y);
    Point& operator=(const Point &otherPoint);
    Point operator-(const Point &otherPoint) const;

    ~Point();

    Fixed getX() const;
    Fixed getY() const;

};

#endif