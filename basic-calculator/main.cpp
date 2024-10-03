#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    float result;
    char op;
    cout << "Enter first num: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second num: ";
    cin >> num2;

    if (op == '+')
        result = num1 + num2;
    else if (op == '-')
        result = num1 - num2;
    else if (op == '*')
        result = num1 * num2;
    else if (op == '/')
        result = (float) num1 / num2;
    else if (op == '%')
        result = num1 % num2;

    cout << num1 << op << num2 << " = " << result << endl;

    return 0;
}
