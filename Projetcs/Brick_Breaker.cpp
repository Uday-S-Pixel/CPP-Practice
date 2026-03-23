/*
    created the border and paddle
for the game
*/
#include <iostream>
using namespace std;

int main()
{
    char border[10][20];

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 20; j++)
        {
            if(i == 0 || i == 9 || j == 0 || j == 19)
            {
                border[i][j] = '#';
            }

            else if(i == 7 && (j >= 9 && j <= 11))
            {
                border[i][j] = '=';
            }

            else
            {
                border[i][j] = ' ';
            }

            
        }
    }


    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 20; j++)
        {
            cout << border[i][j]; 
            
        }
        
        cout << endl;
    }
    
    


   return 0;
}
