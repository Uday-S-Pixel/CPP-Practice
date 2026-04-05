/*
done with paddle movement
*/
#include <iostream>
using namespace std;


int main()
{
    
 char input;
 cout << "Paddle movement: a - left, d - right" << endl;

 //paddle position
 int paddleX = 9;
 int width = 3;

 
cout << "Press '0' to exit the game" << endl;
cout << "Press 'a' to move left, 'd' to move right" << endl;

//while loop to keep the movement running
while(true)
{
    cin >> input;

    if(input == 'a' && paddleX > 1)
    {
        paddleX--;
    }
    else if(input == 'd' && paddleX < 16)
    {
        paddleX++;
    }
    else if(input == '0')
    {
        break; // Exit the game loop
    }

    char border[10][20];

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 20; j++)
        {
            if(i == 0 || i == 9 || j == 0 || j == 19)
            {
                border[i][j] = '#';// outline(game layout)
            }

            else if(i == 5 && j == 10)
            {
                border[i][j] = 'O';// ball
            }

            else if(i == 7 && (j >=paddleX && j <= paddleX + (width - 1)))
            { 
                border[i][j] = '=';// paddle
            }

            else
            {
                border[i][j] = ' ';
            }
            

            
        }
    }
system("cls"); // Clear the console


    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 20; j++)
        {
            cout << border[i][j]; 
            
        }
        
        cout << endl;
    }
}    
    


   return 0;
}
