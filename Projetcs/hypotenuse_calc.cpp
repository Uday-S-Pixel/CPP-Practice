#include <iostream>
#include <math.h>
using std::cout;
using std::cin;

int main()
{
  double a;
  double b;
  double c;

  cout << "Enter length of side A: ";
  cin >> a;

  cout << "Enter length of side B: ";
  cin >> b;

  c = sqrt(pow(a, 2) + pow(b, 2));

  cout << "The length of side C is " << c;

  return 0;
}
