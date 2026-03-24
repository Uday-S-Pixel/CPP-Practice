#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
  double n1;
  double n2;
  double result;
  char op;

  cout << "enter operation to perform(+ - * /)";
  cin >> op;
  cout << "Enter first number ";
  cin >> n1;
  cout << "Enter second number ";
  cin >> n2;
  switch(op)
  {
    case '+':
     result = n1 + n2;
     cout << "The result of addition is " << result << endl ;
     break;
    case '-':
     result = n1 - n2;
     cout << "The result of substraction is " << result << endl ;
     break;

    case '*':
     result = n1 * n2;
     cout << "The result of multiplication is " << result << endl;
     break; 

    case '/' :
     result = n1 / n2;
     cout << "The result of division is " << result << endl;
     break; 

    default:
     cout << "Please enter a valid opeartor (+ - * /) " << endl;
     break;
  }

 return 0;
}
