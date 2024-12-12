/*
write your main() method to declare and input, 3 integers from user
then call a udf to calculate their sum then call another udf to calculate their average
then print average on screen in main method
 */
#include <iostream>
using namespace std;

int get_sum(int a, int b, int c);
float get_average(int sum);

int main() {
    int x, y, z;
    cout << "Enter 3 Integers: ";
    cin >> x >> y >> z;

    int sum = get_sum(x, y, z);
    float average = get_average(sum);
    cout << "Average = " << average << endl;
    return 0;
}

int get_sum(int a, int b, int c) {
    int sum = a + b + c;
    return sum;
}

float get_average(int sum) {
    float average = sum/3.0f;
    return average;
}
