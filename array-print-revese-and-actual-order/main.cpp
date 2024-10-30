#include <iostream>
using namespace std;

int main() {
    int arr[5];
    for (int i=0; i<5; i++)
    {
        cout << "Enter number for arr index " << i << ": ";
        cin >> arr[i];
    }

    // print arr actual order
    cout << "Actual order:\n";
    for (int i=0; i<5; i++)
        cout << arr[i] << "\n";

    // print arr reverse order
    cout << "Reverse order:\n";
    for (int i=4; i>=0; i--)
        cout << arr[i] << "\n";

    return 0;
}
