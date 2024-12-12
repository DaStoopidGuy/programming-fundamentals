/*
 * 2024-12-12
 * Task 1
 * - declare an integer array of size 10
 * - call a udf to take input of array from user
 * - call another udf to print even elements of this array
 * - call another udf to get largest value of array
 * - print largest value on screen in main()
 */

#include <iostream>
using namespace std;

void input_array(int array[], int size);
void print_even_elements_array(int array[], int size);
int get_largest_element_array(int array[], int size);

int main() {
    const int arrayLen = 10;
    int array[arrayLen];

    input_array(array, arrayLen);

    print_even_elements_array(array, arrayLen);

    int largestElem = get_largest_element_array(array, arrayLen);

    cout << "Largest element of array is " << largestElem << endl;

    return 0;
}

void input_array(int array[], int size) {
    cout << "Array Input\n";
    for (int i=0; i<size; i++)
    {
        cout << "Array[" << i << "]: ";
        cin >> array[i];
    }

}

void print_even_elements_array(int array[], int size) {
    cout << "Printing even elements of array\n";
    for (int i=0; i<size; i++) {
        if (array[i]%2 == 0)
            cout << array[i] << " ";
    }
    cout << "\n";
}

int get_largest_element_array(int array[], int size) {
    int largest = array[0];

    for (int i=1; i<size; i++)
    {
        if (array[i]>largest)
            largest = array[i];
    }

    return largest;
}
