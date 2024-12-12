#include <iostream>
using namespace std;

void print_group();
int main() {
    print_group();
    print_group();
    print_group();

    return 0;
}

// user defined function
void print_group() {
    cout << "----------------------------------" << endl;
    cout << "Group Members (with Roll Numbers):" << endl;
    cout << "----------------------------------" << endl;
    cout << "Muhammad Sareb Janjua 242012" << endl;
    cout << "Muhammad Asfand 242023" << endl;
    cout << "Muhammad Talha 242032" << endl;
    cout << "Shahzaib Maqsood 242007" << endl;
    cout << "Aniza Fatima 242005" << endl;
    cout << "Noor Fatima 241986" << endl;
}
