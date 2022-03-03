#include <iostream>

using namespace std;

char runagain();

int main(int argc, char *argv[]) {
    bool check_again = true;
    int num1;

    num1 = 0;
    do {
        cout << "Please enter a number between 1 and 20: ";
        cin >> num1;
        if (num1 >= 1 && num1 <= 20) {
            check_again = false;
        } else {
            cout << "Your number MUST be between 1 and 20." << endl;
        }
    } while (check_again);

    cout << "The number you entered was " << num1 << endl;

    return 0;
}

char runagain() {
    char keepRunning;
    while(true) {
        cout << "Do you want to add two numbers again [Y/N]? ";
        cin >> keepRunning;
        if (keepRunning == 'Y' || keepRunning == 'y' || keepRunning == 'N' || keepRunning == 'n') {
            if (keepRunning == 'Y' || keepRunning == 'y') {
                return true;
            } else {
                return false;
            }
        }
        cout << "You did not enter a y or an n." << endl;
    }
    
}