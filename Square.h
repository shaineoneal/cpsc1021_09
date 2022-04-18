#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"

template <typename T>
class Square : public Shape<T> // inherit publically from Shape
{
    private:
        T side {0};

    public:
        Square() : Shape<T>("Circle") {};
        Square(T side) 
            : Shape<T>("Square"), side(side) {};

        T getArea()
            { return side * side; }
};

#endif
