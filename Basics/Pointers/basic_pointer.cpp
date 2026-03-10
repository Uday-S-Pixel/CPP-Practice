#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    
    int *p=&num;//p is integer pointer to the variable num
    cout<<"The value of num is "<<num<<endl;
    cout<<"The addrress of num is "<<p<<endl;
    cout<<"The value stored in pounter is "<<*p<<endl;
    *p += 4;
    cout<<"The value of num after pointer arithemetic is "<<*p<<endl;
    
    return 0;
}
