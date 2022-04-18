#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include "Trapezoid.h"
#include <iostream>
#include <iomanip>

#include <vector>

using namespace std;

int main()
{
    cout << fixed << showpoint << setprecision(1);

  //circle object with type double
    Circle<double> circleDouble{2.0};
  //square object with type double
    Square<double> squareDouble {2.0};
  //rectangle object with type double
    Rectangle<double> rectangleDouble{2.5,3.0};
  //trapezoid object with type double
    Trapezoid<double> trapezoidDouble{2.5, 3.5, 4.0};

  //vector made of pointers to double-type shapes
    vector <Shape<double>*> doubleVect {&circleDouble, &squareDouble, &rectangleDouble, &trapezoidDouble};

    for(Shape<double> * basePtrDouble : doubleVect)
    {
        cout << "Area of " << basePtrDouble->printName() << " is: ";
        cout << basePtrDouble->getArea() << endl;
    }

  //circle object with type int
    Circle<int> circleint{2};
  //square object with type int
    Square<int> squareint {2};
  //rectangle object with type int
    Rectangle<int> rectangleint{2, 3};
  //trapezoid object with type int
    Trapezoid<int> trapezoidint{2, 3, 4};

  //vector made of pointers to int-type shapes
    vector <Shape<int>*> intVect {&circleint, &squareint, &rectangleint, &trapezoidint};

    for(Shape<int> * basePtrint : intVect)
    {
        cout << "Area of " << basePtrint->printName() << " is: ";
        cout << basePtrint->getArea() << endl;
    }

    return 0;
}
