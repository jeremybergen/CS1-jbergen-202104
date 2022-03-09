#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main(int argc, char *argv[]) {
    int num1;
    int *ptr1;

    ptr1 = &num1;

    int *ptr2 = new int;
    int *ptr3 = new int;

    *ptr2 = 42;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "ptr1 = " << ptr1 << endl;
    cout << "ptr2 = " << ptr2 << endl;
    cout << "ptr3 = " << ptr3 << endl;

    delete ptr2;
    delete ptr3;
    // double somenum;
    // double somenum2;
    // double somenum3;
    // somenum = 42;
    // somenum2 = 25;
    // somenum3 = 91;

    // double *ptr;

    // ptr = &somenum;

    // cout << "somenum = " << somenum << endl;
    // cout << "&somenum = " << &somenum << endl;
    // cout << "&somenum2 = " << &somenum2 << endl;
    // cout << "ptr = " << ptr << endl;
    // cout << "&ptr = " << &ptr << endl;
    // cout << "*ptr = " << *ptr << endl;
    
    // ptr = ptr + 5;

    // cout << "ptr = " << ptr << endl;
    // cout << "*ptr = " << *ptr << endl;


    return 0;
}



















    // int num1 = 42;
    // int num2 = 24;
    // double num3 = 0.1234;
    // double num4 = 0.1234;

    // int * ptr1;
    // int* ptr2;
    // double *ptr3;
    // double *ptr4;
    // int *ptr5 = nullptr;

    // ptr1 = &num1;
    // *ptr1 = 52;
    // // num1 = 52;

    // ptr2 = &num2;
    // *ptr2 = 123;
    
    // ptr3 = &num3;
    // *ptr3 = 0.42;
   
    // ptr4 = &num4;
    // *ptr4 = 10.58;

    // cout << "num1 = " << *ptr1 << endl;
    // cout << "num2 = " << *ptr2 << endl;
    // cout << "num3 = " << *ptr3 << endl;
    // cout << "num4 = " << *ptr4 << endl;
    // cout << "ptr5 = " << ptr5 << endl;

    // cout << "num1 = " << num1 << endl;