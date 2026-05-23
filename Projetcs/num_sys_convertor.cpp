#include <iostream>
#include <cmath>
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

void conv::bin_to_decimal()
{
  int num = 0;
  int power = binary.length() - 1;
 try
 {
  for(int i =0; i < binary.length();i ++)
  {
    if (int(binary[i]-'0') != 0 && int(binary[i]-'0') != 1)
    throw int(binary[i]-'0');
  }
  for(int i = 0;i < binary.length();i ++)
 {
  num = int(binary[i]-'0') * pow(2,power) + num;
  power -- ;
 }
 cout << "Resultant decimal number is " << num << endl;
}
 catch(int x)
 {
  cout << "Entered number is invalid " << endl;
  cout << "You cannot enter " << x << " in binary number system" << endl;
 }
}

void conv::bin_to_hex()
{

}

void conv::oct_to_bin()
{

}

void conv::oct_to_decimal()
{
 int num = 0;
 int power = octal.length() - 1;
 try
 {
 for (int i = 0;i < octal.length();i ++)
 {
  if (int(octal[i] - '0') >= 8 || int(octal[i] - '0') < 0)    
  {
    throw int(octal[i] - '0');
  }
 }
 for(int i = 0;i < octal.length();i ++)
 {
  num = int(octal[i]-'0') * pow(8,power) + num;
  power -- ;
 }
 }
 catch (int c)
 {
  cout << "Entered Octal number is invalid " << endl;
  cout << c << "  is invalid in octal system "<< endl;
 }
 cout << "Resultant decimal number is " << num << endl;
}

void conv::oct_to_hex()
{

}

void conv::decimal_to_bin()
{ 

}

void conv::decimal_to_octa()
{

}

void conv::decimal_to_hex()
{

}

void conv::hex_to_bin()
{

}

void conv::hex_to_decimal()
{
 int num = 0;
 int power = hexnum.length() - 1;
 try
 {
  for(int i = 0;i < hexnum.length();i ++)
  {
   if(!(hexnum[i] >= '0' && hexnum[i] <= '9') && !(hexnum[i] >= 'A' && hexnum[i] <= 'F'))
   throw hexnum[i];
  }
  for(int i = 0;i < hexnum.length();i ++)
 {
  if(hexnum[i] >= 'A' && hexnum[i] <= 'F')
  {
  num = int(hexnum[i]-'A' + 10) * pow(16,power) + num;
  power -- ;
  }
  else
  {
  num = int(hexnum[i]-'0') * pow(16,power) + num;
  power -- ; 
  }
 }
 cout << "Resultant decimal number is " << num << endl;
 }
 catch (char term)
 {
  cout << "Entered hexadecimal number is invalid ";
  cout << term << "  is not present is hexadecimal system ";
 }
}

void conv::hex_to_octa()
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
