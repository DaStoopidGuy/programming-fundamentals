/*
write a UDF:
- receives 3 fractional values
- returns the smallest one
write your driver method to test its functionality
 */

#include <iostream>
using namespace std;

float get_smallest_float(float a, float b, float c);

int main() {
    // Testing get_smallest_float()
    float a = 25.4, b = 65.9, c = 42.9; // a is the smallest float
    float smallestFloat = get_smallest_float(a, b, c);
    cout << "Smallest float = " << smallestFloat << endl;

    if (a == smallestFloat) cout << "SUCCESS\n";
    else cout << "FAILURE\n";

    return 0;
}

float get_smallest_float(float a, float b, float c) {
    float smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;

    return smallest;
}
