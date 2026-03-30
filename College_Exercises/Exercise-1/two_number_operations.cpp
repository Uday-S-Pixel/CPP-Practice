#include <iostream>
using namespace std;

int main()
{
  int val1, val2;
  cout << "Enter value-1  ";
  cin >> val1;
  cout << "Enter value-2  ";
  cin >> val2;

  if (val1 > val2)
  {
    cout << " value-1 is greater than value-2" << endl;
  }
  else
  {
    cout << " value-2 is greater than value-1" << endl ;
  }

  cout << " The sum of the values is " << val1 + val2 << endl;;
  cout << " The difference of the values is " << val1 - val2 << endl;
  cout << " The product of the values is " << val1 * val2 << endl;
  cout << " The ratio of the values is " << float(val1 / val2) << endl;

  return 0;
}
