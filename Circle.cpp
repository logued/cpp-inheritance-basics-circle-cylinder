//
// April 2024
// Inheritance
//

#include "Circle.h"
#include <iostream>

Circle::Circle(double radius)
{
    this->radius = radius;
}
double Circle::getRadius() const // const means this function can not change the radius
{
    return radius;
}
void Circle::setRadius(double r)
{
    radius = r;
}
double Circle::area() const
{
    return radius * radius * 3.14159265359;
}
double Circle::circumference() const
{
    return 2 * 3.14159265359 * radius;
}
void Circle::print() const
{
    std::cout << "Circle [ Radius = " << radius << "]" << std::endl;
}
Circle::~Circle()
{
}
