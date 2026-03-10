/* Program to demonstrate the basic concept of pointers in C++.

   In this program:
   - An integer variable is created and the user enters its value.
   - A pointer is declared to store the address of that variable.
   - The program displays the value of the variable, its memory address,
     and accesses the value using the pointer.

   This demonstrates how pointers store addresses and how the
   dereference operator (*) can be used to access the value.
*/
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
