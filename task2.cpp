#include <iostream>
#include <string>
using namespace std;

/*
    Lab 03 - Task 2: Comments

    1. What is a variable?
       A variable is a named memory location used to store data.
       Its value can be changed while the program is running.
       Example: int age = 20;

    2. What is cin?
       cin is the standard input object of the iostream library.
       It takes input from the user (keyboard) and stores it in a
       variable using the extraction operator >>.

    3. What is cout?
       cout is the standard output object of the iostream library.
       It displays output on the screen using the insertion
       operator <<.
*/

int main() {
    // Declaring variables of different data types
    string name;   // stores text
    int age;       // stores whole numbers
    float gpa;     // stores decimal numbers

    // cout displays a message on the screen
    cout << "Enter name: ";
    // cin reads the user's input into the variable 'name'
    cin >> name;

    cout << "Enter age: ";
    cin >> age;   // single-line comment: reading age

    cout << "Enter GPA: ";
    cin >> gpa;   // single-line comment: reading GPA

    // Displaying the final output
    cout << "Student: " << name
         << ", Age: " << age
         << ", GPA: " << gpa << endl;

    return 0;
}