#include <iostream>
using namespace std;

int main()
{
    const int numberOfStudents = 10;
    string studentNames[numberOfStudents] = {
        "Sara", "Sana", "Ahmed", "Ali", "Saba", "Kamran", "Adeel", "Imran", "Hina", "Adnan"
    };
    int studentMarks[numberOfStudents];

    // Ask user to Enter students' marks
    for (int i=0; i<numberOfStudents; i++)
    {
        cout << "Enter marks of " << studentNames[i] << ": ";
        cin >> studentMarks[i];
    }

    // Print names and marks of all students
    for (int i=0; i<numberOfStudents; i++)
    {
        cout << studentNames[i] << " has " << studentMarks[i] << " marks\n";
    }

    // Print Average marks
    int sum = 0;
    for (int i=0; i<numberOfStudents; i++)
    {
        sum += studentMarks[i];
    }
    float average = (float)sum/numberOfStudents;
    cout << "Average marks are " << average << endl;

    // Maximum Marks
    int maxMarks = studentMarks[0];
    int maxIndex = 0;
    for (int i=1; i<numberOfStudents; i++)
    {
        if (studentMarks[i] > maxMarks)
        {
            maxMarks = studentMarks[i];
            maxIndex = i;
        }
    }

    // Minimum Marks
    int minMarks = studentMarks[0];
    int minIndex = 0;
    for (int i=1; i<numberOfStudents; i++)
    {
        if (studentMarks[i] < minMarks)
        {
            minMarks = studentMarks[i];
            minIndex = i;
        }
    }

    // Print Max and Min marks
    cout << studentNames[maxIndex] << " has gotten Maximum marks: " << studentMarks[maxIndex] << endl;
    cout << studentNames[minIndex] << " has gotten Minimum marks: " << studentMarks[minIndex] << endl;
    return 0;
}
