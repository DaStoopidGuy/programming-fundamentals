#include <iostream>
using namespace std;

int main() {
    string weather, day;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter weather: ";
    cin >> weather;

    if (day == "saturday") {
        if (weather == "sunny")
            cout << "Picnic\n";
        else if (weather == "cloudy")
            cout << "Sports\n";
    }
    else if (day == "sunday") {
        if (weather == "sunny")
            cout << "Shopping\n";
        else if (weather == "cloudy")
            cout << "Cleaning\n";
    }

    return 0;
}
