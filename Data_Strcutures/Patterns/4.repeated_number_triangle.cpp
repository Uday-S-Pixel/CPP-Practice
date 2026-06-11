//Source Code
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter no of rows: ";
  cin >> n;
  int num = 0;
  for (int i = 0;i < 5;i ++)
  {
    num ++;
    for (int j = 0; j <= i;j ++)
    {
      cout << num;
    }
    cout << "\n";
  }
  return 0;
}

//Expected Output
/*for n = 5
1
22
333
4444
55555
*/
