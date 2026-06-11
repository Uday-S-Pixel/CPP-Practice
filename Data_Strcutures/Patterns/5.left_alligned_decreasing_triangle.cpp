//Source code
#include <iostream>
using namespace std;

int main()
{
 int n;
 cout << "Enter no of rows: ";
 cin >> n;
  for (int i = n; i >= 0;i --)
  {
    for (int j = 0; j <= i;j ++)
    {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}

//Expected Output
/*for n = 5
******
*****
****
***
**
*
*/
