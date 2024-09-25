#include <iostream>
using namespace std;

/*
 * Formula Celsius - Farenheit
 * F = (9/5)C + 32
 */
int main() {
    float tempInC;
    cout << "Enter temperature in Celsius: ";
    cin >> tempInC;
    float tempInF = (9.0/5.0)*tempInC + 32.0;
    cout << "Temperature in Farenheit = " << tempInF << endl;

    return 0; 
}
