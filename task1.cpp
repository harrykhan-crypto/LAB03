#include <iostream>
#include <string>
using namespace std;

/*
    Lab 03 - Variables, Data Types & Input/Output in C++

    Concepts explained (Task 2):

    1. What is a variable?
       A variable is a named memory location used to store data.
       Its value can change while the program runs.
       Example: int age = 20;

    2. What is cin?
       cin is the standard input object from <iostream>.
       It reads data typed by the user (keyboard) into a variable
       using the extraction operator >>.

    3. What is cout?
       cout is the standard output object from <iostream>.
       It displays text and values on the screen
       using the insertion operator <<.
*/

int main() {
    // Variable declarations (each variable has a data type and a name)
    string name;        // stores text
    int age;            // stores a whole number
    float gpa;          // stores a decimal number
    string department;  // Task 3: new variable for department
    int birthYear;      // Task 4: stores the calculated birth year

    // ----- Taking input from the user -----
    cout << "Enter name: ";
    cin >> name;                    // cin reads the value into 'name'

    cout << "Enter age: ";
    cin >> age;

    // Task 4: calculate birth year using the formula 2026 - age
    birthYear = 2026 - age;

    cout << "Enter GPA: ";
    cin >> gpa;

    cout << "Enter department: ";   // Task 3
    cin >> department;

    // ----- Task 1: display data line by line -----
    cout << endl;
    cout << "Student Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Department: " << department << endl;   // Task 3
    cout << "Birth Year: " << birthYear << endl;     // Task 4

    return 0;
}