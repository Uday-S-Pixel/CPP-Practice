// Program to demonstrate hierarchial inheritance
// Hierarchial inheritance is the type of inheritance in which multiple classes are derived from one base class
#include <iostream>
using namespace std;

class num
{
protected:
    int a;

public:
    void getnum()
    {
        cout << "Enter a number: ";
        cin >> a;
    }
};

class square : public num
{
public:
    void displaySquare()
    {
        cout << "Square of number is: " << a * a << endl;
    }
};

class cube : public num
{
public:
    void displayCube()
    {
        cout << "Cube of number is: " << a * a * a << endl;
    }
};

int main()
{
    square s;
    s.getnum();
    s.displaySquare();

    cube c;
    c.getnum();
    c.displayCube();

    return 0;
}
