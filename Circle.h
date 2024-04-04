#ifndef INHERITANCE_BASICS_CIRCLE_CYLINDER_CIRCLE_H
#define INHERITANCE_BASICS_CIRCLE_CYLINDER_CIRCLE_H
//
// Inheritance      April 2024
//

// Circle class is a Base class for the Cylinder class.
// Meaning that Cylinder inherits from this class.
//(It's a Superclass)
//
class Circle
{
private:
    double radius;

public:
    Circle(double radius=1);	// parameter, with default value

    double getRadius() const;
    void setRadius(double r);

    double area() const;
    double circumference() const;
    void print() const;

    ~Circle();  // destructor
};


#endif //INHERITANCE_BASICS_CIRCLE_CYLINDER_CIRCLE_H
