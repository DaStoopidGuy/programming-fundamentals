#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream fout("student.txt");

    // - write number of students at top of file
    // then,
    // student data
    // ----
    // - name_______(string)
    // - roll no____(int)
    // - marks______(float)
    // - gpa________(float)

    fout << 5 << endl;

    //fout << << endl;
    fout << "Asfand" << endl;
    fout << 241 << endl;
    fout << 73.0 << endl;
    fout << 3.1 << endl;

    fout << "Bilal" << endl;
    fout << 242 << endl;
    fout << 83.1 << endl;
    fout << 3.3 << endl;

    fout << "Ahmed" << endl;
    fout << 243 << endl;
    fout << 58.4 << endl;
    fout << 2.9 << endl;

    fout << "Salman" << endl;
    fout << 244 << endl;
    fout << 89.9 << endl;
    fout << 3.5 << endl;

    fout << "Umar" << endl;
    fout << 245 << endl;
    fout << 69.4 << endl;
    fout << 3.0 << endl;

    fout.close();
    return 0;
}
