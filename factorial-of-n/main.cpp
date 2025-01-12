#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int result = 1;
    for (int i=n; i>=1; i--)
        result *= i;

    cout << "The factorial of n is: " << result << endl;
    //cout << n << "! = " << result << endl;
    return 0;
}
