/*
  taking input is done
  work to be done on functions part
*/
#include <iostream>
using namespace std; 

class input
{
  protected:
  string hexnum;
  string binary;
  string octal;
  string decimal;
  int radix_1;
  int radix_2;
  int num_1;

  public:
  void get_radix()
  {
   cout << "Enter the radix/base of the input number (2,8,10,16):  ";
   cin >> radix_1;

   cout << "Enter the radix/base you want to convert the number to (2,8,10,16):  ";
   cin >> radix_2;
  }

  void get_num()
  {
   try
   {
   switch (radix_1)
   {
    case 2:
     cout << "Enter the binary number: ";
     cin >> binary;
     break;
    case 8:
     cout << "Enter the octal number: ";
     cin >> octal;
     break;
    case 10:
     cout << "Enter the decimal number: ";
     cin >> decimal;
     break;
    case 16:
     cout << "Enter the hexadecimal number: ";
     cin >> hexnum;
     break;
    default:
     throw radix_1; 
   }
  }
  catch(int rad_1)
  {
    cout << "Enter a valid radix: " << endl;
    cout << "Your radix "<< rad_1 << " is not valid " << endl;  
  }

  try
  {
    if (radix_2 !=2 && radix_2 != 8 && radix_2 != 10 && radix_2 != 16)
    {
      throw radix_2;
    }
  }
    catch(int rad_2)
    {
      cout << "Your required radix " << rad_2 << "is invalid ";
    }
 }
};

class conv:public input
{
  public:
  //functions
  void bin_to_oct();
  void bin_to_decimal();
  void bin_to_hex();

  void oct_to_bin();
  void oct_to_decimal();
  void oct_to_hex();

  void decimal_to_bin();
  void decimal_to_octa();
  void decimal_to_hex();

  void hex_to_bin();
  void hex_to_decimal();
  void hex_to_octa();

  public:
  void check()
  {
    if (radix_1 == 2 && radix_2 == 8)
    {
      bin_to_oct();
    }
    if (radix_1 == 2 && radix_2 == 10)
    {
      bin_to_decimal();
    }
    if (radix_1 == 2 && radix_2 == 16)
    {
      bin_to_hex();
    }

    if (radix_1 == 8 && radix_2 == 2)
    {
      oct_to_bin();
    }
    if (radix_1 == 8 && radix_2 == 10)
    {
      oct_to_decimal();
    }
    if (radix_1 == 8 && radix_2 == 16)
    {
      oct_to_hex();
    }

    if (radix_1 == 10 && radix_2 == 2)
    {
      decimal_to_bin();
    }
    if (radix_1 == 10 && radix_2 == 8)
    {
      decimal_to_octa();
    }
    if (radix_1 == 10 && radix_2 == 16)
    {
      decimal_to_hex();
    }

    if (radix_1 == 16 && radix_2 == 2)
    {
      hex_to_bin();
    }
    if (radix_1 == 16 && radix_2 == 8)
    {
      hex_to_octa();
    }
    if (radix_1 == 16 && radix_2 == 10)
    {
      hex_to_decimal();
    }
  }
};

void conv::bin_to_oct()
{
  
}

int main()
{
  conv c;
  c.get_radix();
  c.get_num();
  c.check();
  return 0;
}
