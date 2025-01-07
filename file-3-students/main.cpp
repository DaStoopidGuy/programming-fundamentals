#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream fout("student.txt");
    // enter name, roll # & marks of 3 students
    fout << "Ahmed" << endl;
    fout << 61 << endl;
    fout << 73 << endl;

    fout << "Talha" << endl;
    fout << 62 << endl;
    fout << 84 << endl;

    fout << "Ali" << endl;
    fout << 63 << endl;
    fout << 59 << endl;

    fout.close();
    return 0;
}
