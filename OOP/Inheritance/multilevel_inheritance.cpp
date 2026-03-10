/* Program to demonstrate multilevel inheritance in C++.

   In this program:
   - The class Student stores the basic details of a student (name and roll number).
   - The class Marks inherits from Student and stores the marks of two subjects.
   - The class Result inherits from Marks and calculates the total marks.

   This forms a multilevel inheritance structure:

        Student
           ↓
         Marks
           ↓
         Result

   The Result class can access the data members and functions of both
   the Student and Marks classes due to inheritance.
*/
#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string name;
    int roll;

public:
    void input()
    {
        cout << "Enter your name ";
        getline(cin, name);

        cout << "Enter your roll ";
        cin >> roll;
    }
};

class Marks : public Student
{
protected:
    int m1, m2;

public:
    void inputMarks()
    {
        cout << "Enter marks of two subjects" << endl;
        cout << "m1= ";
        cin >> m1;

        cout << "m2= ";
        cin >> m2;
    }
};

class Result : public Marks
{
protected:
    int result;

public:
    void details()
    {
        int r = m1 + m2;

        cout << "----------Student Details--------" << endl;
        cout << "The name of the student " << name << endl;
        cout << "The roll no of the student " << roll << endl;
        cout << "The total marks of the student " << r << endl;
    }
};

int main()
{
    Result p;

    p.input();       // from Student
    p.inputMarks();  // from Marks
    p.details();     // from Result

    return 0;
}
