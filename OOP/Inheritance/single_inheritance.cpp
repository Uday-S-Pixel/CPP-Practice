/* Program to demonstrate basic single inheritance in C++.

   In this program:
   - A parent class contains variables and functions.
   - A child class inherits from the parent class.
   - The child class can access the parent class functions and
     protected data members.

   This shows how inheritance allows code reuse between classes.
*/
#include <iostream>
using namespace std;

class parent
{
    protected:
    int a,b;
    
    public:
    void input()
    {
        cout<<"Enter the value of a ";
        cin>>a;
        cout<<"Enter the value of b ";
        cin>>b;
    }
   
   void output()
   {
       cout<<"The value of a in parent class is "<<a<<endl;
   }
   
};
class child:public parent//child class inheriting from parent class
{
    public:
    void data()
    {
        cout<<"The value of b in child class is "<<b<<endl;
    }
};
int main(){
   child c;
   c.input();
   c.output();
   c.data();
    return 0;
}
