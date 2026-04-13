#include <iostream>
using namespace std;

class Base
{
  public:

  virtual void hello()
  {
    cout << "Hello  from Base class ";
  }
};

class Der:public Base
{
  public:

  void hello()
  {
    cout << "Hello from Derived class ";
  }
};

int main()
{
  Base *b;
  Der d;
  b = &d;// The pointer is now pointing to a derived project but its actual type is Base*
  b->hello();// As b is pointed to a derived object i.e; d it will use the function in the derived class

  // If there is no concept of virtual the compiler will use the function in the base class as it checks only the pointer type i.e; Base*

  return 0;
}
