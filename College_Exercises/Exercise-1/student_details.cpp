#include <iostream>
#include <string>

using namespace std;

int main() {
    char s_name;
    string name;
    int marks;
    char gender;
    char result;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student surname: ";
    cin >> s_name;

    cout << "Enter student marks: ";
    cin >> marks;

    cout << "Enter student gender (M/F): ";
    cin >> gender;

    if (marks >= 40) {
        result = 'P';
    } else {
        result = 'F';
    }

    cout << "****Student Details****" << endl;
    cout << "Name: " << name << " " << s_name << endl;
    cout << "Marks: " << marks << endl;
    cout << "Gender: " << gender << endl;
    cout << "Result: " << result << endl;

    return 0;
}
