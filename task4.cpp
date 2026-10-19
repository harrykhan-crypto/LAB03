#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    float gpa;
    string department;
    int birthYear;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    // Calculate birth year right after taking age
    birthYear = 2026 - age;

    cout << "Enter GPA: ";
    cin >> gpa;

    cout << "Enter department: ";
    cin >> department;

    cout << endl;
    cout << "Student Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Department: " << department << endl;
    cout << "Birth Year: " << birthYear << endl;

    return 0;
}