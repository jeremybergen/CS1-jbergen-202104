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
template <class t1>
void populate_array(t1[], const size_t&);

template <class t1>
void print_array(t1[], const size_t&);

template <class t1>
void find_largest(t1[], const size_t&, t1&);

template <class t1>
void bubble_sort(t1[], const size_t&);

template <class t1>
void swapem(t1[], const size_t&);

int main(int argc, char *argv[]) {
    size_t arr_size = 10;
    double mynums[arr_size] = {0};
    double largest = 0;

    populate_array<double>(mynums, arr_size);

    print_array<double>(mynums, arr_size);

    bubble_sort<double>(mynums, arr_size);

    print_array<double>(mynums, arr_size);

    // find_largest(mynums, arr_size, largest);

    cout << "The largest number from the list is: " << mynums[0] << endl;
    return 0;
}

template <class t1>
void swapem(t1 numbers[], const size_t& position) {
    t1 tmpnum = numbers[position+1];
    numbers[position+1] = numbers[position];
    numbers[position] = tmpnum;
}

template <class t1>
void bubble_sort(t1 numbers[], const size_t& arr_size) {
    bool swapped = false;
    for (size_t i = 0; i < (arr_size - 1); i++) {
        swapped = false;
        for (size_t j = 0; j < (arr_size - 1) - i; j++) {
            if (numbers[j] < numbers[j+1]) {
                swapped = true;
                swapem<t1>(numbers, j);
            }
        }
        // print_array(numbers, arr_size);
        if (!swapped) {
            break;
        }
        
    }
}

template <class t1>
void find_largest(t1 numbers[], const size_t& arr_size, t1& largest) {
    largest = numbers[0];
    for (size_t i = 1; i < arr_size; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    // cout << "The largest value from the list is: " << largest << endl;
}

template <class t1>
void print_array(t1 numbers[], const size_t& arr_size) {
    for (size_t i = 0; i < arr_size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

template <class t1>
void populate_array(t1 numbers[], const size_t& arr_size) {

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