/*
 * C++ Program:
 * -----------
 * Input <- user inputs day of the week (string)
 * Output ->
 * - Print "Weekend" if day == "sunday"
 * - Print "Weekend is coming" if day == "saturday"
 * - Print "Working day" if day =="monday - friday"
 */
#include <iostream>
using namespace std;

int main() {
    string day;
    cout << "Enter day of the week: ";
    cin >> day;

    if (day == "sunday")
        cout << "Weekend" << endl;
    else if (day == "saturday")
        cout << "Weekend is coming" << endl;
    else
        cout << "Working day" << endl;

    return 0;
}
