/*
Name: Jeremy Bergen
Date: 03/03/22

This program will print out a multiplication table
*/
#include <iostream>
#include <iomanip>

using namespace std;

const unsigned int set_print_column_width = 5;

void print_table(const unsigned int&);
void print_header(const unsigned int&);
unsigned int prompt_size();

int main(int argc, char *argv[]) {
    unsigned int table_size;
    table_size = prompt_size();


    print_table(table_size);

    return 0;
}

unsigned int prompt_size() {
    unsigned int table_size = 0;
    cout << "This will print out a multiplication table." << endl;

    do {
        cout << "How big of a table do you want (1-14)? ";
        cin >> table_size;
        if (table_size >= 1 and table_size <= 14) {
            return table_size;
        }
        cout << "Your table must be between 1 and 14." << endl;
    } while (table_size < 1 or table_size > 14);
    return table_size = 0;
}

void print_table(const unsigned int &table_size) {
    print_header(table_size);
    for (unsigned int j = 1; j <= table_size; j++) {
        for (unsigned int i = 1; i <= table_size; i++) {
            cout << setw(set_print_column_width) << i * j;
        }
        cout << endl;
    }
}

void print_header(const unsigned int &table_size) {
    for (unsigned int i = 1; i <= table_size; i++){
        // printf("%5d", i);
        cout << setw(set_print_column_width) << i;
    }
    cout << endl;
    cout << setfill('-');
    for (unsigned int i = 1; i <= table_size; i++) {
        cout << setw(set_print_column_width) << "";
    }
    cout << endl;
    cout << setfill(' ');
}