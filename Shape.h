#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>

template <typename T>

class Shape
{
    private:
        std::string name;
    public:
        Shape() = default;
        Shape(std::string name) : name(name) {};

        virtual std::string printName() final
            { return name; };

        virtual T getArea() = 0;

};

#endif
