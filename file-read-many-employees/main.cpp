#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream fin("emp.txt");

    // read first line to get number 
    // of employees to read from file
    int numEmployees = 0;
    fin >> numEmployees;

    // iterate that many times to 
    // read and print each employee
    string empName;
    int empAge;
    int empID;
    int empSalary;

    for (int i=0; i<numEmployees; i++)
    {
        fin >> empName;
        fin >> empAge;
        fin >> empID;
        fin >> empSalary;

        cout << "___________________________" << endl;
        cout << "Employee Number " << i+1 << ":\n";
        cout << "----" << endl;
        cout << "Name: " << empName << endl;
        cout << "Age: " << empAge << " years" << endl;
        cout << "ID: " << empID << endl;
        cout << "Salary: Rs. " << empSalary << endl;
    }

    fin.close();
    return 0;
}
