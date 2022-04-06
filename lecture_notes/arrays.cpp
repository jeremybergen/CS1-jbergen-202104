#include <iostream>
#include <string>
#include "string.h"
#include <algorithm>
#include <iterator>
#include <functional>
#include <iomanip>

using namespace std;

// const size_t board_size = 5;

// void printarray(char[board_size][board_size]);
void populate_array(int[], const size_t&);
void print_array(int[], const size_t&);
void find_largest(int[], const size_t&);

int main(int argc, char *argv[]) {
    size_t arr_size = 10;
    int mynums[arr_size] = {0};

    populate_array(mynums, arr_size);

    print_array(mynums, arr_size);

    find_largest(mynums, arr_size);
    return 0;
}

void find_largest(int numbers[], const size_t& arr_size) {
    int largest = numbers[0];
    for (size_t i = 1; i < arr_size; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    cout << "The largest value from the list is: " << largest << endl;
}

void print_array(int numbers[], const size_t& arr_size) {
    for (size_t i = 0; i < arr_size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

void populate_array(int numbers[], const size_t& arr_size) {
    for (size_t i = 0; i < arr_size; i++) {
        cout << "Please enter a number: ";
        cin >> numbers[i];
    }
}

// void printarray(char myarray[board_size][board_size]) {
//     for (size_t i = 0; i < board_size; i++) {
//         for (size_t j = 0; j < board_size; j++) {
//             cout << setw(1) << myarray[i][j] << " ";
//         }
//         cout << endl;
//     }
// }



    // char tictactoe[board_size][board_size] = {0};
    // // char *ptr;

    // // ptr = tictactoe[0];
    // tictactoe[0][0] = 'X';
    // tictactoe[0][1] = 'O';
    // tictactoe[1][0] = 'J';
    // tictactoe[2][1] = 'O';
    // tictactoe[0][2] = 'X';
    // tictactoe[2][0] = 'O';

    // printarray(tictactoe);

    // // cout << ptr << endl;
    // // cout << ptr[0] << endl;
    // // ptr += 3;
    // // cout << ptr << endl;
    // // cout << ptr[0] << endl;

    // // for (size_t i = 0; i < 3; i++) {
    // //     for (size_t j = 0; j < 3; j++) {
    // //         cout << setw(1) << tictactoe[i][j] << " ";
    // //     }
    // //     cout << endl;
    // // }