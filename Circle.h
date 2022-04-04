//
// Inheritance      April 2022
//

#ifndef INHERITANCE_BASICS_CIRCLE_CYLINDER_CIRCLE_H
#define INHERITANCE_BASICS_CIRCLE_CYLINDER_CIRCLE_H

class Circle
{
private:
    double radius;

public:
    Circle(double radius=1);	// parameter, with default value

    double getRadius() const;
    void setRadius(double r);

    double area() const;
    double circumfrence() const;
    void print() const;

    ~Circle();  // destructor
};


#endif //INHERITANCE_BASICS_CIRCLE_CYLINDER_CIRCLE_H
