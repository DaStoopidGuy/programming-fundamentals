#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    cout << "Your grade is ";
    if (marks >= 80)
        cout << "A\n";
    else if (marks >= 60)
        cout << "B\n";
    else if (marks >= 40)
        cout << "C\n";
    else
        cout << "F\n";

    return 0;
}
