#include <iostream>
#include <iomanip>   // for fixed and setprecision
using namespace std;

int main() {
    char grade = 'A';        // char stores a single character
    double fee = 45000.75;   // double stores large decimal numbers

    cout << "Stored Values" << endl;
    cout << "-------------" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Fee: " << fixed << setprecision(2) << fee << endl;

    return 0;
}