/*
 * ## Task 2
 * - inputs 2 values from user of type float
 * - print them on screen
 * - exchange/swap their values
 * - print them on screen again#include <iostream>
 */

#include <iostream>
using namespace std;

int main() {
    float a, b;

    // Input
    cout << "Enter 2 floating point numbers: ";
    cin >> a >> b;

    // Print
    cout << "Print 2 floats\n";
    cout << "A is " << a << "\nB is " << b << endl;

    // Swap values
    {
    float temp = a;
    a = b;
    b = temp;
    }

    // Print again
    cout << "Print 2 floats after swapping\n";
    cout << "A is " << a << "\nB is " << b << endl;

    return 0;
}
