/*
Name: Jeremy Bergen
Date: 03/10/22

Write a program that determines area and perimeter of a rectangle.
must use pointers and dynamic memory to store data
must use functions to find area and perimeter
prompt user to enter length and width of a rectangle
write a test function to test functions that work with command line arguments
*/
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void greetuser(string *, const bool &);
void promptname(string *);
void promptsides(double *, double *);
void calcrectangle(double *, double *);
double calcarea(double *, double *);
double calcperim(double *, double *);
void calcanother(bool &);
void tests();

int main(int argc, char *argv[]) {
    string *firstname = new string;
    double *side1 = new double;
    double *side2 = new double;
    bool keeprunning = false;
    bool input = false;

    if (argc == 2 && (string)argv[1] == "test"){
        tests();
        return 0;
    } else if (argc == 4) {
        *firstname = (string)argv[1];
        *side1 = stod((string)argv[2]);
        *side2 = stod((string)argv[3]);
        input = true;
        greetuser(firstname, input);
        calcrectangle(side1, side2);
        return 0;
    }

    promptname(firstname);
    greetuser(firstname, input);
    do {
        promptsides(side1, side2);
        calcrectangle(side1, side2);
        calcanother(keeprunning);
    } while (keeprunning);
    // cout << "DEBUG: side1 = " << *side1 << ", side2 = " << *side2 << endl;

    cout << "Thanks for using my program." << endl;

    delete firstname;
    delete side1;
    delete side2;
    return 0;
}

void tests() {
    double *side1 = new double;
    double *side2 = new double;
    *side1 = 42;
    *side2 = 15;
    assert(calcarea(side1, side2) == 630);

    *side1 = 2.0;
    *side2 = 5.0;
    assert(calcperim(side1, side2) == 14);
    cout << "All test cases passed!" << endl;

    delete side1;
    delete side2;
}

void calcanother(bool &keeprunning) {
    char another;
    cout << "Do you want to calculate another rectangle [Y/N]? ";
    cin >> another;
    
    while (!(another == 'Y' || another == 'y' || another == 'N' || another == 'n')) {
        cout << "You did not enter a Y or an N. Try again: ";
        cin >> another;
    }

    if (another == 'Y' || another == 'y') {
        keeprunning = true;
    } else {
        keeprunning = false;
    }
}

double calcarea(double *side1, double *side2) {
    return *side1 * *side2;
}

double calcperim(double *side1, double *side2) {
    return (2 * *side1) + (2 * *side2);
}

void calcrectangle(double *side1, double *side2) {
    double area, perimeter;
    area = calcarea(side1, side2);
    perimeter = calcperim(side1, side2);

    cout << "Your rectangle with sides: " << *side1 << " " << *side2 << endl
         << "area = " << area << endl
         << "perimeter = " << perimeter << endl;
}

void promptsides(double *side1, double *side2) {
    bool validside = false;
    do {
        cout << "Please enter side1: ";
        cin >> *side1;
        if (*side1 <= 0) {
            cout << "You must enter a positive number." << endl;
        } else {
            validside = true;
        }
    } while(!validside);

    // cout << "DEBUG: validside = " << boolalpha << validside << endl;
    validside = false;
    do {
        cout << "Please enter side2: ";
        cin >> *side2;
        if (*side2 <= 0) {
            cout << "You must enter a positive number." << endl;
        } else {
            validside = true;
        }
    } while (!validside);
}

void promptname(string *firstname) {
    cout << "Welcome to our rectangle calculator.\nPlease enter your first name: ";
    cin >> *firstname;
}

void greetuser(string *firstname, const bool &input) {
    if (!input) {
        cout << "Welcome " << *firstname << " to our program!" << endl;
    } else {
        cout << *firstname << " this will only calculate the rectangle you enter from the arguments." << endl;
    }
}