#include <iostream>
using namespace std;

int main() {
    string weather, day;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter weather: ";
    cin >> weather;
    if (day == "saturday" && weather == "sunny")
        cout << "Picnic\n";
    else if (day == "saturday" && weather == "cloudy")
        cout << "Sports\n";
    else if (day == "sunday" && weather == "sunny")
        cout << "Shopping\n";
    else if (day == "sunday" && weather == "cloudy")
        cout << "Cleaning\n";

    return 0;
}
