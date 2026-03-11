#include <iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter your two numbers ";
    cin>>n1>>n2;
    
    if(n2 % n1 == 0)
    {
        cout<<"Number 2 is multiple of number 1";
    }
    else
    {
        cout<<"Number 2 is not a multiple of number 1";
    }
    return 0;
}
