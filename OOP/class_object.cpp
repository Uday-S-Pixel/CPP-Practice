#include <iostream>
using namespace std;
class Numprint
{
    private:
    int a;
    
    public:
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
    d.getdata();
    d.output();
    
    return 0;
}
