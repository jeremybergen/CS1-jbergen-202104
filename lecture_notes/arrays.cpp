#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    size_t arr_size;
    int somenum;
    
    // arr_size = 5;
    
    unsigned int somenumbers[50] = {42, 15, 29, 19, 1239244, 123, 51, 213};

    arr_size = sizeof(somenumbers)/sizeof(int);

    for (size_t i = 0; i < arr_size; i++) {
        cout << "somenumbers[" << i << "]: " << somenumbers[i] << endl;
    }

    // cout << sizeof(somenumbers)/sizeof(int) << endl;

    // for (size_t i = 0; i < arr_size; i++) {
    //     somenumbers[i] = -1;
    // }

    // int *ptr;

    // ptr = &somenumbers[4];


    // somenumbers[0] = 42;
    // somenumbers[1] = 15;
    // somenumbers[2] = 29;
    // somenumbers[3] = 19;
    // somenumbers[4] = 1239244;
    // somenumbers[4] = somenumbers[2] + somenumbers[3];

    // cout << somenumbers[4] << endl;
    // "This is a string\0"
    // size_t i = 0;
    // size_t count = 0;
    // while(somenumbers[i] != -1 && i < arr_size) {
    //     count++;
    //     i++;
    // }
    // cout << "There are " << count << " elements in my array" << endl;


    // cout << "somenumbers[5]: " << somenumbers[5] << endl;

    // cout << "somenumbers: " << *ptr << endl;
    // ptr -= 1;
    // cout << "somenumbers: " << *ptr << endl;
    // cout << "somenumbers: " <<  << endl;
    return 0;
}