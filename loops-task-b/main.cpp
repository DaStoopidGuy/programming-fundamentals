/*
 * 9 October 2024
 * Task B
 * ------
 * required output:
 * 1
 * 2
 * 4
 * 7
 * 11
 * 16
 * ... (upto 20 terms)
 */
#include <iostream>
using namespace std;

int main() {
    int num = 1;

    for (int i = 1; i <= 20; i++) {
        cout << num << "\n";
        num += i;
    }

    return 0;
}
