/*
 * 9 October 2024
 * Task A
 * ------
 * required output:
 * 1
 * 2
 * 4
 * 8
 * 16
 * ...
 * 1024
 */
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 1024; i*=2)
        cout << i << "\n";

    return 0;
}
