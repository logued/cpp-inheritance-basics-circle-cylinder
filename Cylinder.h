#ifndef INHERITANCE_BASICS_CIRCLE_CYLINDER_CYLINDER_H
#define INHERITANCE_BASICS_CIRCLE_CYLINDER_CYLINDER_H

// Cylinder class inherits from Circle

#include "Circle.h"

class Cylinder : public Circle		// public inheritance
{

private:
    double height;

public:
    Cylinder(double radius = 1, double height=1);	// default values if no arguments supplied

    double getHeight() const;
    void setHeight(double h);

    double volume() const;
    double area()const ;

    void print() const;

    ~Cylinder();	// destructor
};


#endif //INHERITANCE_BASICS_CIRCLE_CYLINDER_CYLINDER_H
