/*
Name: Jeremy Bergen
Date: 04/04/22

#Write and use a Makefile to build and run your program. (5 points)
Use function prototypes. (5 points)
1) Define a function that takes 5 numbers, calculates and returns the sum of the numbers. (5 points)
2) Define a function that takes 5 numbers, calculates and returns the product of the numbers. (5 points)
3) Define a function that takes 5 numbers, calculates and returns the average of the numbers. Must call the function you defined earlier to find the sum of the five numbers. (5 points)
4) Define a function that takes 5 numbers, finds and returns the largest value among the numbers. Must use your own conditional statements and NOT use any built-in function. (5 points)
5) Define a function that takes 5 numbers, finds and returns the smallest value among the numbers. Must use your own conditional statements and NOT use any built-in function. (10 points)
6) Define a function that takes five numbers and returns if the floor of the sum of those numbers is even, odd or zero. (5 points)
At least one function must be templated to work on various types (5 points).
7) Greet the user by their name and prompt them to enter 5 numbers. (5 points)
8) Display menu options for each function and call the specific function based on the user's choice to calculate the result using switch statement and display the result with proper descriptions. (5 points)
9) Define a function called test (5*5=25 points)
10) For each of the functions you defined above write at least 3 automated test cases using assert statements to automatically test and verify that the functions provide correct results. 
    Try to come up with corner cases (various data) to confirm the functions still provide the correct results.
Call the test function only if the “test” argument is passed to main. (5 points)
10 bonus points will be given if you make your program continue to run and calculate the statistical values of as many sets of 5 numbers as a user wishes until they want to quit the program.
*/
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

template<class t1, class t2, class t3, class t4, class t5>
t1 sum_nums(const t1&, const t2&, const t3&, const t4&, const t5&);

double prod_nums(const double&, const double&, const double&, const double&, const double&);
double avg_nums(const double&, const double&, const double&, const double&, const double&);
// double largest_num(const double&, const double&, const double&, const double&, const double&);
double largest_num(double[], const size_t&);
double smallest_num(const double&, const double&, const double&, const double&, const double&);
int even_odd_floor(const double&, const double&, const double&, const double&, const double&);
void tests();

int main(int argc, char *argv[]) {
    if (argc == 2 && argv[1] == (string)"test") {
        tests();
        exit(EXIT_SUCCESS);
        return 0;
        exit(0);
    }
    while (true) {
        return 0;
    }
    return 0;
}

template<class t1, class t2, class t3, class t4, class t5>
t1 sum_nums(const t1& num1, const t2& num2, const t3& num3, const t4& num4, const t5& num5){
    exit(0);
    return num1+num2+num3+num4+num5;
}

double prod_nums(const double& num1, const double& num2, const double& num3, const double& num4, const double& num5) {
    return num1*num2*num3*num4*num5;
}

double avg_nums(const double& num1, const double& num2, const double& num3, const double& num4, const double& num5) {
    return (sum_nums<double, double, double, double, double>(num1, num2, num3, num4, num5))/5;
}

double largest_num(double numbers[], const size_t& arr_size) {
    double largest = numbers[0];
    for (size_t i = 1; i < arr_size; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    return largest;
}
// double largest_num(const double& num1, const double& num2, const double& num3, const double& num4, const double& num5) {
//     double largest = num1;
//     if (num2 > largest) {
//         largest = num2;
//     }
//     if (num3 > largest) {
//         largest = num3;
//     }
//     if (num4 > largest) {
//         largest = num4;
//     }
//     if (num5 > largest) {
//         largest = num5;
//     }
//     return largest;
//     // if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) {
//     //     return num1;
//     // } else if (num2 > num3 && num2 > num4 && num2 > num5) {
//     //     return num2;
//     // } else if (num3 > num4 && num3 > num5) {
//     //     return num3;
//     // } else if (num4 > num5) {
//     //     return num4;
//     // } else {
//     //     return num5;
//     // }
// }

double smallest_num(const double& num1, const double& num2, const double& num3, const double& num4, const double& num5) {
    double smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }
    if (num4 < smallest) {
        smallest = num4;
    }
    if (num5 < smallest) {
        smallest = num5;
    }
    return smallest;
}

int even_odd_floor(const double& num1, const double& num2, const double& num3, const double& num4, const double& num5) {
    double floor_num = floor(sum_nums<double, double, double, double, double>(num1, num2, num3, num4, num5));
    if (floor_num == 0) {
        return 0;
    } else if ((int)floor_num%2 == 0){
        return 2;
    } else {
        return 1;
    }
}

void tests() {
    cout << "Hello";
}