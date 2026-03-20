#include "../inc/Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point );
bool bsp2( Point const a, Point const b, Point const c, Point const point );

std::ostream& operator<<(std::ostream& out, const Fixed& fp);
std::ostream& operator<<(std::ostream& out, const Point& fp);

int main( void )
{
    {
        Point a(0, 0);
        Point b(5, 0);
        Point c(0, 5);

        std::cout << "The triangle is defined by points " << a << ", " << b << ", and " << c << "." << std::endl;

        Point pointIn01(1, 1);
        Point pointIn02(4, 4);
        Point pointIn03(2, 3);
        Point pointIn04(3, 2);
        Point pointIn05(5, 5);
        Point pointIn06(0, 0);

        if (bsp(a, b, c, pointIn01)) {
            std::cout << "The point " << pointIn01 << " is inside the triangle." << std::endl;
        } else {
            std::cout << "The point " << pointIn01 << " is outside the triangle." << std::endl;
        }
        if (bsp(a, b, c, pointIn02)) {
            std::cout << "The point " << pointIn02 << " is inside the triangle." << std::endl;
        } else {
            std::cout << "The point " << pointIn02 << " is outside the triangle." << std::endl;
        }
        if (bsp(a, b, c, pointIn03)) {
            std::cout << "The point " << pointIn03 << " is inside the triangle." << std::endl;
        } else {
            std::cout << "The point " << pointIn03 << " is outside the triangle." << std::endl;
        }
        if (bsp(a, b, c, pointIn04)) {
            std::cout << "The point " << pointIn04 << " is inside the triangle." << std::endl;
        } else {
            std::cout << "The point " << pointIn04 << " is outside the triangle." << std::endl;
        }
        if (bsp(a, b, c, pointIn05)) {
            std::cout << "The point " << pointIn05 << " is inside the triangle." << std::endl;
        } else {
            std::cout << "The point " << pointIn05 << " is outside the triangle." << std::endl;
        }
        if (bsp(a, b, c, pointIn06)) {
            std::cout << "The point " << pointIn06 << " is inside the triangle." << std::endl;
        } else {
            std::cout << "The point " << pointIn06 << " is outside the triangle." << std::endl;
        }
    }

    {
        Point a(0, 0);
        Point b(5, 0);
        Point c(0, 5);

        std::cout << "With the revised bsp2 function:" << std::endl;
        std::cout << "The triangle is defined by points " << a << ", " << b << ", and " << c << "." << std::endl;

        Point pointIn01(1, 1);
        Point pointIn02(4, 4);
        Point pointIn03(2, 3);
        Point pointIn04(3, 2);
        Point pointIn05(5, 5);
        Point pointIn06(0, 0);

        if (bsp2(a, b, c, pointIn01)) {
            std::cout << "The point " << pointIn01 << " is inside the triangle." << std::endl;
        } else {
            std::cout << "The point " << pointIn01 << " is outside the triangle." << std::endl;
        }
        if (bsp2(a, b, c, pointIn02)) {
            std::cout << "The point " << pointIn02 << " is inside the triangle." << std::endl;
        } else {
            std::cout << "The point " << pointIn02 << " is outside the triangle." << std::endl;
        }
        if (bsp2(a, b, c, pointIn03)) {
            std::cout << "The point " << pointIn03 << " is inside the triangle." << std::endl;
        } else {
            std::cout << "The point " << pointIn03 << " is outside the triangle." << std::endl;
        }
        if (bsp2(a, b, c, pointIn04)) {
            std::cout << "The point " << pointIn04 << " is inside the triangle." << std::endl;
        } else {
            std::cout << "The point " << pointIn04 << " is outside the triangle." << std::endl;
        }
        if (bsp2(a, b, c, pointIn05)) {
            std::cout << "The point " << pointIn05 << " is inside the triangle." << std::endl;
        } else {
            std::cout << "The point " << pointIn05 << " is outside the triangle." << std::endl;
        }
        if (bsp2(a, b, c, pointIn06)) {
            std::cout << "The point " << pointIn06 << " is inside the triangle." << std::endl;
        } else {
            std::cout << "The point " << pointIn06 << " is outside the triangle." << std::endl;
        }
    }


    return 0;
}