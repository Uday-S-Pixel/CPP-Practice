#include <iostream>
using namespace std;

int main()
{
 int i, j;
 int key, n;
 cout << "Enter number of elements in ur array ";
 cin >> n;
 int arr[n];
 cout << "Enter the element you want to search the element in this array ";
 cin >> key;

 cout << "Enter the elements in the array\n";
 for (j = 0;j < n;j ++)
 {
   cin >> arr[j];
 }

 for (i = 0;i < n;i ++)
 {
    if (arr[i] == key)
    {
     cout << "Element " << key << " found at position " << i + 1 << "\n";
     break;
    }
 }
 
 if (i == n)
 {
    cout << "Element " << key << " not found";
 }
 
 return 0;
}
