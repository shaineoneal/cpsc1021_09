#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "Shape.h"

template <typename T>
class Trapezoid : public Shape<T> // inherit publically from Shape
{
    private:
        T base1 {0},
            base2 {0},
            height {0};

    public:
        Trapezoid() : Shape<T>("Trapezoid") {};
        Trapezoid(T base1, T base2, T height)
            : Shape<T>("Trapezoid"), base1(base1), base2(base2), height(height) {};
        
        T getArea()
            { return ((base1 + base2) / 2) * height; }

};

#endif
