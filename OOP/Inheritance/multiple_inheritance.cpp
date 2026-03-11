#include <iostream>
using namespace std;

class number1
{
    protected:
    int a;
    
    public:
    void input1()
    {
        cout<<"Enter first number ";
        cin>>a;
    }
};

class number2
{
    protected:
    int b;
    
    public:
    void input2()
    {
        cout<<"\nEnter second number ";
        cin>>b;
    }
};

class calc:public number1,public number2
{
    public:
    void calculate()
    {
        cout<<"\nThe sum of the two numbers is = "<<a + b;
        cout<<"\nThe product of the two numbers is = "<<a * b;
    }
};

int main()
{
    calc c;
    c.input1();
    c.input2();
    c.calculate();
    return 0;
}
