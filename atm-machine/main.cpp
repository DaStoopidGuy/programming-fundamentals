#include <iostream>
using namespace std;

int main() {
    string old_password, new_password;

    int command;
    cout << "Press 1 to check balance\n"
            "Press 2 for cash withdrawal\n"
            "Press 3 for case deposit\n"
            "Press 4 to change password\n"
            "Press 5 to Exit\n";

    cout << "Enter command: ";
    cin >> command;

    if (command == 1) {
        cout << "Your balance is Rs. 10,000\n";
    }
    else if (command == 2) {
        int amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        cout << "Rs. " << amount << " has been withdrawn\n";
    }
    else if (command == 3) {
        int amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        cout << "Rs. " << amount << " has been deposited\n";
    }
    else if (command == 4) {
        cout << "Enter old password: ";
        cin >> old_password;
        cout << "Enter new password: ";
        cin >> new_password;
        cout << "Password changed to " << new_password << "\n";
    }
    else if (command == 5) {
        cout << "Exiting...\n";
        return 0;
    }
    return 0;
}
