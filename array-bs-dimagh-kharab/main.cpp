#include <iostream>
using namespace std;

int main() {
    // PART AAAAAA
    // declare int arr[10]
    const int arrSize = 10;
    int arr[arrSize];

    // take input of arr
    for (int i=0; i<arrSize; i++)
    {
        cout << "Arr [" << i << "]: ";
        cin >> arr[i];
    }

    // print arr in actual order
    cout << "Arr in actual order\n";
    for (int i=0; i<arrSize; i++)
        cout << arr[i] << " ";
    cout << endl;

    // print arr in reverse order
    cout << "Arr in reverse order\n";
    for (int i = arrSize-1; i>=0; i--)
        cout << arr[i] << " ";
    cout << endl;

    // delcare int brr[10]
    int brr[arrSize];

    // copy arr -> brr
    for (int i=0; i<arrSize; i++)
        brr[i] = arr[i];

    // print brr on screen 
    cout << "Brr\n";
    for (int i=0; i<arrSize; i++)
        cout << brr[i] << " ";
    cout << endl;

    // declare int crr[10]
    int crr[arrSize];

    // copy arr -> crr in reverse order
    for (int i=0; i<arrSize; i++)
    {
        crr[i] = arr[arrSize-1-i];
    }

    // print crr on screen
    cout << "Crr\n";
    for (int i=0; i<arrSize; i++)
        cout << crr[i] << " ";
    cout << endl;

    // declare drr array of same size
    int drr[arrSize];
    for (int i=0; i<arrSize; i++)
        drr[i] = arr[i] + crr[i];

    // print drr on screen 
    cout << "Drr\n";
    for (int i=0; i<arrSize; i++)
        cout << drr[i] << " ";
    cout << endl;

    // print even elements of arr
    cout << "Even elements of Arr\n";
    for (int i=0; i<arrSize; i++)
    {
        if (arr[i]%2 == 0)
            cout << arr[i] << " ";
    }
    cout << endl;
    
    // print odd indexed elements of arr
    cout << "Odd indexed elements of Arr\n";
    for (int i=0; i<arrSize; i++)
        if (i%2 != 0)
            cout << arr[i] << " ";
    cout << endl;

    // print arr and crr in zig-zag order
    cout << "Arr and Crr in zig-zag hehhehehehehhe\n";
    for (int i=0; i<arrSize; i++)
    {
        cout << arr[i] << " ";
        cout << crr[i] << " ";
    }
    cout << endl;

    // Print arr in actual order and brr in reverse order IN PARALLELLLL AAAAAAAAAAAAAAA
    cout << "Arr in actual, Brr in reverse.. IN PARALLEL\n";
    for (int i=0; i<arrSize; i++)
    {
        int reverse_i = arrSize-1-i;
        cout << arr[i] << "\t" << brr[reverse_i] << "\n";
    }

    return 0;
}
