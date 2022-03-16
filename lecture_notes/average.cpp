#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

const double epsilon = 1e-5;

void findaverage(const double &, const double &, double &);
void tests();

int main(int argc, char *argv[]) {
    //double average;
    //call 
    //findaverage(num1, num2, average);
    return 0;
}

void tests() {
    double average;
    double expected;
    findaverage(5, 5, average);
    expected = 5;
    assert(fabs(average - expected) <= epsilon);
}

void findaverage(const double &num1, const double &num2, double &avg) {
    //find average and store in avg
}