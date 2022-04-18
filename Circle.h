#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

template <typename T>
class Circle : public Shape<T> // inherit publically from Shape
{
    private:
        T radius;
        const double PI {3.14};

    public:
        Circle() : Shape<T>("Circle") {};
        Circle(T radius) 
            : Shape<T>("Circle"), radius(radius) {};

        T getArea()
            { return radius * radius * PI; }
};

#endif
