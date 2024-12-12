/*
 * ## Task 3
 * - call a udf to input names of 7 students
 * - call another udf to input marks of 7 students
 * - call another udf to print the names and marks of the student who got highest marks
 * Note: marks could be fractional values
 */

#include <iostream>
using namespace std;

void input_names(string names[], int size);
void input_marks(float marks[], int size);
void print_topper(string names[], float marks[], int size);

int main() {
    int size = 7;
    string names[size];
    float marks[size];

    input_names(names, size);
    input_marks(marks, size);
    print_topper(names, marks, size);
    return 0;
}

void input_names(string names[], int size) {
    cout << "Input names of students\n";
    for (int i=0; i<size; i++) {
        cout << "names[" << i << "]: ";
        cin >> names[i];
    }
}

void input_marks(float marks[], int size) {
    cout << "Input marks of students\n";
    for (int i=0; i<size; i++) {
        cout << "marks[" << i << "]: ";
        cin >> marks[i];
    }
}

void print_topper(string names[], float marks[], int size) {
    int idxTopper = 0;
    // find student with highest marks
    float highestMarks = marks[0];
    for (int i=1; i<size; i++)
    {
        if (marks[i] > highestMarks)
        {
            highestMarks = marks[i];
            idxTopper = i;
        }
    }

    cout << "Student with Highest marks:\n";
    cout << names[idxTopper] << " got " << marks[idxTopper] << " marks! meow\n";
}
