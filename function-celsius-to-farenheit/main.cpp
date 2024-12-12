#include <iostream>
using namespace std;

float celsius_to_farenheit(float tempC);

int main() {
    // 100F is 37.77C
    int tempF = celsius_to_farenheit(37.778);
    cout << "37.778 Celsius in Farenheit = " << tempF << endl;

    if (tempF == 100) cout << "SUCCESS\n";
    else cout << "FAILURE\n";

    return 0;
}

/*
 * Formula Celsius - Fahrenheit
 * F = (9/5)C + 32
 */
float celsius_to_farenheit(float tempC) {
    float tempF = (9.0/5.0)*tempC + 32.0; 
    return tempF;
}
