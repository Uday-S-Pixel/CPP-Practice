#include <iostream>
using namespace std;

int main()
{
  int a, b ,c;
  cout << "Enter three numbers: ";
  cin >> a >> b >> c;
  
  int largest = a;
  if (b > largest) {
    largest = b;
  }
  if (c > largest) {
    largest = c;
  }
  
  int smallest = a;
  if (b < smallest) {
    smallest = b;
  }
  if (c < smallest) {
    smallest = c;
  }
  
  int mid;
  if (a < largest && a > smallest) {
    mid = a;
  } else if (b < largest && b > smallest) {
    mid = b;
  } else if (c < largest && c > smallest) {
    mid = c;
  } else {
    cout << "There is no distinct middle number." << endl;
  }

  cout << " " << smallest << " ," << mid << " ," << largest << endl;
  return 0;
}
