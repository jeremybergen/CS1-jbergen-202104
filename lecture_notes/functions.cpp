#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// float addnums(float, float);
// double addnums(double, double);
// double addnums(float, int);
// int addnums(int, int);
template <class a, class b, class c> c multiplynums(a, b);
template <class returntype, class inputtype1, class inputtype2> returntype subnums(inputtype1, inputtype2);
int addnums(int, int num2 = 0, int num3 = 0);
void tests();

const int x = 15;

int main() {
    // tests();
    // float answer;
    // answer = addnums(42.5, 15);
    // cout << "42 + 15 = " << answer << endl;
    cout << "42 * 15 = " 
         << multiplynums<float, int, int>(42.4456, 15) << endl;

    cout << "42 - 15.3 = " << typeid(subnums<int, int, double>(42, 15.3)).name() << endl;

    cout << addnums(42, 10, 10) << endl;
    return 0;
}

// void tests() {
//     cout << number1 << endl;
    // assert((subnums<int, int, int>(42, 15)) == 27);
//     cout << number1 << endl;
//     assert((subnums<int, int, int>(10, 25)) == -15);

//     cout << "All test cases passed" << endl;
// }

int addnums(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

template <class returntype, class inputtype1, class inputtype2>
returntype subnums(inputtype1 num1, inputtype2 num2) {
    int apple = 0;
    apple += 10;
    return num1 - num2;
}

template <class a, class b, class c>
c multiplynums(a num1, b num2) {
    cout << "DEBUG: templated function" << endl;
    c sum;
    sum = num1 * num2;
    return sum;
}



// double addnums(double num1, double num2) {
//     cout << "DEBUG: double" << endl;
//     double sum;
//     sum = num1 + num2;
//     return sum;
// }

// float addnums(float num1, float num2) {
//     cout << "DEBUG: float" << endl;
//     float sum;
//     sum = num1 + num2;
//     return sum;
// }

// double addnums(float num1, int num2) {
//     cout << "DEBUG: float/int" << endl;
//     double sum;
//     sum = num1 + num2;
//     return sum;
// }

// int addnums(int num1, int num2) {
//     cout << "DEBUG: int" << endl;
//     int sum;
//     sum = num1 + num2;
//     return sum;
// }
























/*
#include <iostream>
#include <cassert>

using namespace std;

void greeting(string);
void many_greetings(string);
float addnums(int, int);
void prompt_nums(float&, float&);
void tests();

int main() {
    float num1, num2;

    tests();

    prompt_nums(num1, num2);
    cout << addnums(num1, num2) << endl;

    // many_greetings(firstname);

    return 0;
}

void tests() {
    assert(addnums(10, 5) == 15);
    assert(addnums(43, 12) == 55);
    assert(addnums(-5, 5) == 0);
    cout << "All test cases passed" << endl;
}

void prompt_nums(float &n1, float &n2) {
    cout << "Please enter two numbers separated by a space: ";
    cin >> n1 >> n2;
    n1 = float(n1);
    n2 = float(n2);
}

float addnums(int num1, int num2) {
    int sum;

    sum = num1 - num2;
    return sum;
}

void many_greetings(string name) {
    greeting(name);
    greeting(name);
    greeting(name);
}

void greeting(string name) {
    cout << "Hello " << name << endl;
    many_greetings(name);
}
*/