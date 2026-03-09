#include <iostream>
using namespace std;
class Numprint
// Class that stores a number and prints it
{
    private:
// private members can only be accessed inside the class
// this helps protect data from being modified directly
    int a;
    
    public:
//any method(functions) or variable mentioned under public can be used anywhere in the program
    void getdata()
    {
        cout<<"Enter the number u want to print"<<endl;
        cin>>a;
    }
    
    void output()
    {
        cout<<"The number is: "<<a;
    }
};

int main()
{
    Numprint d;
    //d is an object to the class Numprint which allows access to the public members of the class
    d.getdata();
    d.output();
    
    return 0;
}
