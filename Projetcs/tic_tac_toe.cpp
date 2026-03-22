/*
  Work in progress u may find errros
*/

#include <iostream>
using namespace std;

int main()
{
  int i,j;
  char interface[3][3];

  for ( i = 0; i < 3; i++)
  {
    
    for ( j = 0; j < 3; j++)
    {
      interface[i][j] = ' ';
    }
  }

   for ( i = 0; i < 3; i++)
  {
    
    for ( j = 0; j < 3; j++)
    {
     cout << " " << interface[i][j] << " ";
     cout << "|";
    }
    cout<<"\n.....";
  }

}
