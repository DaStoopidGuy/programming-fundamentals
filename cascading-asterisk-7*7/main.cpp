
#include <iostream>
using namespace std;

int main() {
    int i = 7;
    while(i >= 1)
    {
        int j = i;
        while(j >= 1)
        {
            cout << "*";
            j--;
        }
        cout << endl;
        i--;
    }
    return 0;
}
