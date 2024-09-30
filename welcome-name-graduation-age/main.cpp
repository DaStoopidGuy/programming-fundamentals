#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    cout << "Please enter your name: ";
    /*cin >> name;*/
    getline(cin, name);
    cout << "Please enter your age: ";
    cin >> age;

    cout << "\n\n";
    cout << "Welcome " << name << "! Hope you are doing well :)"<< endl;
    cout << "Your age at graduation will be " << age + 4 << " years." << endl;
    cout << "\n\n";

    return 0;
}
