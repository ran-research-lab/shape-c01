#include "Shape.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle : public Shape {
protected:
    double width;
    double height;
public:
    double getArea() const;
    double getPerimeter() const;
    void setWidth(double w);
    void setHeight(double h);
};


#endif // RECTANGLE_H
