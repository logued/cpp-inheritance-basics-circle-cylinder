#include <iostream>

// CircleCylinder.cpp :			// April 2022
// Demonstrates :
// Inheritance, override functions
// Circle is the "base" class (superclass)
// Cylinder is the "derived" class ( as it extends the base class Circle)
//

#include "Circle.h"
#include "Cylinder.h"
#include <iostream>
using namespace std;

int main()
{
    std::cout << "Inhertance: Cylinder inherits from Circle\n";

    Circle c1;              // create Circle object, uses no-argument constructor

    Circle c2(5);    // creat Circle object using constructor to set radius to 5

    c1.print();
    cout << "Area: " << c1.area() << endl;
    cout << "Circumfrence: " << c1.circumfrence() << endl;

    c2.print();
    cout << "Area: " << c2.area() << endl;
    cout << "Circumfrence: " << c2.circumfrence() << endl;

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

