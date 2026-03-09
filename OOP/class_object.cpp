/* Program to demonstrate a simple class and object in C++.
   The class stores a number entered by the user and prints it.
   Concepts used: class, object, private data member, public member functions.
*/

#include <iostream>
using namespace std;

// Class that stores a number and prints it
class Numprint
{
private:
    int a;   // private variable to store the number (cannot be accessed outside the class)

public:
    // function to take input from the user
    void getdata()
    {
        cout << "Enter the number you want to print: ";
        cin >> a;
    }

    // function to display the number
    void output()
    {
        cout << "The number is: " << a;
    }
};

int main()
{
    // creating an object of class Numprint
    Numprint d;

    // calling member functions using the object
    d.getdata();
    d.output();

    return 0;
}
