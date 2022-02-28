#include "Point2D.h"
#include <iostream>

int main()
{
    Point2D point1(0.1, 0.2);
    Point2D point2(0.3, 0.4);
    Point2D point3 = point1 + point2;
    Point2D point4 = point1 - point2;

    std::cout << point3.get_x() << " " << point3.get_y() << std::endl;
    std::cout << point4.get_x() << " " << point4.get_y() << std::endl;
}