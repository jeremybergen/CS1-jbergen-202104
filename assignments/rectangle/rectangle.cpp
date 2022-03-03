/*
Name: Jeremy Bergen
Date: 02/10/22

This program will calculate the 
area and perimeter of a rectangle

Step 1: prompt the user for side1 and side2
Step 2: calculate area = side1 * side2
Step 3: calculate perimeter = 2 * side1 + 2 * side2
Step 4: Print out area and perimeter
*/
#include <iostream>

using namespace std;

int main() {
    float side1, side2;
    float area, perimeter;
    //Step 1
    cout << "Please enter side1 and side2 separated by a space: ";
    cin >> side1 >> side2;
    cout << "You entered " 
         << side1 << " for side1 and "
         << side2 << " for side2." << endl;
    //Step 2
    area = side1 * side2;

    //Step 3
    perimeter = 2 * side1 + 2 * side2;

    //Step 4
    cout << "area: " << area << endl 
         << "perimeter: " << perimeter << endl;
    // cout << "The area and perimeter for the rectangle with sides " 
    //      << side1 << " and " << side2 << " is:"
    //      << endl << "area: " << area << endl 
    //      << "perimeter: " << perimeter << endl;
    return 0;
}