#include <iostream>
using namespace std;

int main() {
    const int row_len = 9;
    int count = 1;
    while (count <= row_len)
    {
        int spaces = (row_len - count)/2;
        while (spaces >= 0)
        {
            cout << "  ";
            spaces--;
        }
        int asterisks = count;
        while(asterisks >= 1)
        {
            cout << "* ";
            asterisks--;
        }

        cout << endl;
        count += 2;
    }
    while (count >= 1)
    {
        int spaces = (row_len - count)/2;
        while (spaces >= 0)
        {
            cout << "  ";
            spaces--;
        }
        int asterisks = count;
        while(asterisks >= 1)
        {
            cout << "* ";
            asterisks--;
        }

        cout << endl;
        count -= 2;
    }
    return 0;
}
