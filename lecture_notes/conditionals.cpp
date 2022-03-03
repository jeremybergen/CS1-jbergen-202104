#include <iostream>
#include <string>
#include <cassert>

using namespace std;

enum Days {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main(int argc, char* argv[]) {
    int day_of_week;
    cout << "Please enter the day of the week as an int: ";
    cin >> day_of_week;
    // if (day_of_week == 0) {
    //     cout << "Sunday" << endl;
    // } else if (day_of_week == 1) {
    //     cout << "Monday" << endl;
    // }
    switch (day_of_week) {
        case Sunday:
            cout << "Sunday" << endl;
            break;
        case Monday:
            cout << "Monday" << endl;
            break;
        case Tuesday:
            cout << "Tuesday" << endl;
            break;
        case Wednesday:
            cout << "Wednesday" << endl;
            break;
        case Thursday:
            cout << "Thursday" << endl;
            break;
        case Friday:
            cout << "Friday" << endl;
            break;
        case Saturday:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "You did not enter a valid day" << endl;
            break;
    }

    return 0;
}
