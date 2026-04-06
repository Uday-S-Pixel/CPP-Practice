#include <iostream>
using namespace std;

class count
{
private:
    static int b;   // static variable
// We are creating a static variable as a static function
// can access only static members of a class
public:
    count()
    {
        b++;   // increment when object is created
    }

    static void showcount()
    {
        cout << "Number of objects created: " << b;
    }
};

// static variable definition
int count::b = 0; 
// We can access a static variable via the class name
// as the static members belong to the class itself not to any object 

int main()
{
    count s1;
    count s2;
    count s3;

    count::showcount();   // call using class name

    return 0;
}
