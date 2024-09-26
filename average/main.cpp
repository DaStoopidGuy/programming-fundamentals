#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, sum;
    float avg;
    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;
    sum =  num1 + num2 + num3;
    avg = sum / 3.0;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
    return 0;
}
