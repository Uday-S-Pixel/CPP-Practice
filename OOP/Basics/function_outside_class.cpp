/* Program to demonstrate defining member functions outside the class.
   The program takes two numbers from the user and performs:
   1) Addition
   2) Multiplication
   It uses the scope resolution operator (::) to define functions outside the class.
*/

#include <iostream>
using namespace std;

class Demo
{
private:
    int a, b;   // variables to store the numbers

public:
    void input();      // function to take input
    void add();        // function to add numbers
    void multiply();   // function to multiply numbers
};

int main()
{
    Demo d;   // creating object of class Demo

    d.input();      // calling input function
    d.add();        // calling addition function
    d.multiply();   // calling multiplication function

    return 0;
}

// defining member function outside the class using ::
void Demo::input()
{
    cout << "Enter number 1: ";
    cin >> a;

    cout << "Enter number 2: ";
    cin >> b;
}

void Demo::add()
{
    int sum = a + b;
    cout << "Addition result: " << sum << endl;
}

void Demo::multiply()
{
    int product = a * b;
    cout << "Multiplication result: " << product << endl;
}
