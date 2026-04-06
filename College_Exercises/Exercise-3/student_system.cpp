#include <iostream>
using namespace std;

class student
{
  protected:
  int roll;
  string name;

  public:
  void getdata()
  {
    cout << "Enter the roll number of the student-";
    cin >> roll;
    cout << "Enter the name of the student-";
    cin >> name;
  }
};

class test:public student
{
 protected:
 string subjects[5] = {"Math", "Physics", "Chemistry", "English", "CS"};
 int marks[5];

 public:
 void sub_marks()
 {
 for(int i = 0;i < 5;i++)
 {
   cout << "Enter " << subjects[i] << " marks ";
   cin >> marks[i];
 }
 } 
};

class sports
{
 protected:
 int sp_score;

 public:
 void get_score()
 {
    cout << "Enter score in sports-";
    cin >> sp_score;
 }
};

class result:public sports,public test
{
 private:
 int total_score;
 int total = 0;

 public:
 void res()
 {   
 for(int j = 0;j < 5;j ++)
 {
   total = total + marks[j];
 }
 total_score = total + sp_score;
}

void display()
{
cout << "------Student Details------" << endl;
cout << "Student roll number is " << roll << endl;
cout << "Student name is " <<name << endl;
for(int k = 0;k < 5;k++)
{
    cout << subjects[k] << " marks are " << marks[k] << endl;
}
cout << "Score in sports is " << sp_score << endl;
cout << "Total Score is " << total_score << endl;
}
};

int main()
{
 result r;
 r.getdata();
 r.sub_marks();
 r.get_score();
 r.res();
 cout << "\n\n";
 r.display();
  
  return 0;
}
