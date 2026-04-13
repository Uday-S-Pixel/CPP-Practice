// Implemented a abstract class for framework and added a add function to add books

#include <iostream>
using namespace std;

class media
{
  // Media works as a abstract class here
  public:
  virtual void add() = 0;
  virtual void issue() = 0;
  virtual void deposit() = 0; 
};

class Book:public media
{
  private:
  string book[10];

  public:
  void add()
  {
    cout << "Enter the name of book u want to add";
    for (int i = 0;i < 10;i ++)
    {
      if(book[i] == " ")
      {
      getline(cin, book[i]);
      break;
      }
    }
  }  
};

class Tape:public media
{
  
};

int main()
{
  

  return 0;
}

