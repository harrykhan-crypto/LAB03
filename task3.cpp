#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    float gpa;
    string department;   // new variable

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter GPA: ";
    cin >> gpa;

    cout << "Enter department: ";   // taking department as input
    cin >> department;

    cout << endl;
    cout << "Student Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Department: " << department << endl;   // displayed in final output

    return 0;
}