#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual void area() = 0;   // pure virtual function
    /*
    can be written as
    virual void area()
    {

    }*/
  // Generally the abstract class member function acts as a frame work to the 
  // dervued class
};

class Circle : public Shape {
public:
    float r;

    Circle(float radius) {
    r = radius;
    }

    void area() {
    cout << "Area of Circle: " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape {
public:
    float l, b;

    Rectangle(float length, float breadth) {
    l = length;
    b = breadth;
    }

    void area() {
        cout << "Area of Rectangle: " << l * b << endl;
    }
};

int main() {
    Shape* s;   // base class pointer

    Circle c(5);
    Rectangle r(4, 6);

    s = &c;
    s->area();   

    s = &r;
    s->area();  

    return 0;
}
