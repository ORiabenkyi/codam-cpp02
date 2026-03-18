#include "../inc/Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point );

int main( void )
{
    {
        Point a;
        Point b(-10, 0);
        Point c(0, -10);

        Point point(5, 5);

        if (bsp(a, b, c, point)) {
            std::cout << "The point is inside the triangle." << std::endl;
        } else {
            std::cout << "The point is outside the triangle." << std::endl;
        }
    }
    
    {
        Point a;
        Point b(10, 0);
        Point c(0, 10);

        Point point(1, 1);

        if (bsp(a, b, c, point)) {
            std::cout << "The point is inside the triangle." << std::endl;
        } else {
            std::cout << "The point is outside the triangle." << std::endl;
        }
    }
    {
        Point a;
        Point b(10, 0);
        Point c(0, 10);

        Point point(-5, -5);

        if (bsp(a, b, c, point)) {
            std::cout << "The point is inside the triangle." << std::endl;
        } else {
            std::cout << "The point is outside the triangle." << std::endl;
        }
    }    
    
    
    return 0;
}