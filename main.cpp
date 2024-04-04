//
// CircleCylinder.cpp :			// April 2024
// Demonstrates :
// Inheritance, override functions
// Circle is the "base" class (superclass)
// Cylinder is the "derived" class ( as it extends the base class Circle)
//

#include "Circle.h"
#include "Cylinder.h"
// Note that in Cylinder.h already has included the file Circle.h.
// However, Circle.h will not be included twice in this file because the
//  #ifndef INHERITANCE_BASICS_CIRCLE_CYLINDER_CIRCLE_H
//  #define INHERITANCE_BASICS_CIRCLE_CYLINDER_CIRCLE_H
// directives will allow it to be defined once, but NOT twice in this code.

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Inheritance: Cylinder inherits from Circle\n";

    Circle c1;              // create Circle object, uses no-argument constructor

    Circle c2(5);    // creat Circle object using constructor to set radius to 5

    c1.print();
    cout << "Area: " << c1.area() << endl;
    cout << "Circumference: " << c1.circumference() << endl;

    c2.print();
    cout << "Area: " << c2.area() << endl;
    cout << "Circumference: " << c2.circumference() << endl;

    // Create Cylinder objects, which inherit (the radius field) from the Circle class

    Cylinder cylinder1;       // create Cylinder object, using no-argument constructor

    Cylinder cylinder2(5, 20);

    cylinder1.print();
    cout << "Volume: " << cylinder1.volume() << endl;
    cout << "Surface Area: " << cylinder1.area() << endl;   // override function - surface area

    cylinder2.print();
    cout << "Volume: " << cylinder2.volume() << endl;
    cout << "Surface Area: " << cylinder2.area() << endl;

    cout << "Radius = " << cylinder2.getRadius() << endl;    // calling inherited function

}

