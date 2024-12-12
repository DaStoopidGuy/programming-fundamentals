/*
 * ## Task 4
 * - write your main method to declare two integer variables
 * - call a udf to take their input from user
 * - call another udf to print their values on screen
 * - call another udf to swap their values
 * - finally call a udf to print their values on screen again
 * Note: Use appropriate function calling mechanism (pass by value/reference)
 */

#include <iostream>
using namespace std;

void user_input(int *x, int *y);
void print_meow(int a, int b);
void swap_ints(int *x, int *y);

int main() {
    int a, b;
    user_input(&a, &b);
    print_meow(a, b);
    swap_ints(&a, &b);
    print_meow(a, b);

    return 0;
}

void user_input(int *x, int *y) {
    cout << "Enter 2 integers: ";
    cin >> *x >> *y;
}

void print_meow(int a, int b) {
    cout << "Printing values\n";
    cout << "A is " << a << "\n";
    cout << "B is " << b << "\n";
}

void swap_ints(int *x, int *y) {
    cout << "Swapping\n";
    int temp = *x;
    *x = *y;
    *y = temp;
}
