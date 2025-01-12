#include <iostream>
using namespace std;

int main() {
    int current, prev;
    current = prev = 1;

    cout << prev << " ";
    for (int i = 1; i <= 15; i++)
    {
        cout << current << " ";
        int newNum = current + prev;
        prev = current;
        current = newNum;
    }
    cout << endl;
    return 0;
}
