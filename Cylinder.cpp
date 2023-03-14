//
// Cylinder.cpp     April 2022
//

#include "Cylinder.h"
#include <iostream>

// : Circle() radius) calls the Base Class (superclass) constructor
Cylinder::Cylinder(double radius, double height) : Circle(radius)
{
    this->height = height;
}
double Cylinder::getHeight() const
{
    return height;
}
void Cylinder::setHeight(double h)
{
    height = h;
}
double Cylinder::volume() const
{
    return Circle::area() * height;
}
// override the area() function from Base Class
double Cylinder::area() const
{
    return (Circle::circumfrence()*height) + (2 * Circle::area());
}

void Cylinder::print() const
{
    std::cout << "Cylinder[radius=" << getRadius() << ", height=" << height<< "]"<< std::endl;
}

Cylinder::~Cylinder()   // destructor
{
}
