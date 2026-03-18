#include "../inc/Point.hpp"
#include <iostream>

Fixed area(const Point& a, const Point& b) {
    return (a.getX() * b.getY()) - (b.getX() * a.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point ) {
    Fixed areaAC = area(a - c, point - c);
    Fixed areaBC = area(c - b, point - b);
    Fixed areaAB = area(b - a, point- a);

    return !((areaAB > 0 || areaAC > 0 || areaBC > 0) && (areaAB < 0 || areaAC < 0 || areaBC < 0));
    
    //if are points are collinear, they are not considered to be inside the triangle
    // return !((areaAB > 0 || areaAC > 0 || areaBC > 0) && (areaAB < 0 || areaAC < 0 || areaBC < 0)) && (areaAB != 0 && areaAC != 0 && areaBC != 0);
}

bool bsp2( Point const a, Point const b, Point const c, Point const point ) {
    Fixed areaAC = area(a - c, point - c);
    Fixed areaBC = area(c - b, point - b);
    Fixed areaAB = area(b - a, point- a);

    // return !((areaAB > 0 || areaAC > 0 || areaBC > 0) && (areaAB < 0 || areaAC < 0 || areaBC < 0));
    
    //if are points are collinear, they are not considered to be inside the triangle
    return !((areaAB > 0 || areaAC > 0 || areaBC > 0) && (areaAB < 0 || areaAC < 0 || areaBC < 0)) && (areaAB != 0 && areaAC != 0 && areaBC != 0);
}