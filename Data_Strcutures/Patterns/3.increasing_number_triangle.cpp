//Source Code
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter no of rows: ";
  cin >> n;
  for (int i = 0;i < n;i ++)
  {
    int num = 1;
    for (int j = 0; j <= i;j ++)
    {
      cout << num ;
      num ++;
    }
    cout << "\n";
  }
  return 0;
}

//Expected Output
/*for n = 5
1
12
123
1234
12345
*/
