#include <iostream>
using namespace std;

int main() {
    int current, prev;
    current = prev = 1;

    cout << prev << endl;
    for (int i = 1; i <= 15; i++)
    {
        cout << current << endl;
        int newNum = current + prev;
        prev = current;
        current = newNum;
    }
    return 0;
}
