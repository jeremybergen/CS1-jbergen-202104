#include <iostream>
#include <string>
#include "string.h"

using namespace std;

void populate_array(int, const size_t&);

int main(int argc, char *argv[]) {
    // char fullname[] = "Jeremy Bergen";
    char sentence[] = "This is a sentence";
    char *pch;

    pch = strtok(sentence, " ");
    while (pch != NULL) {
        cout << "pch: " << pch << endl;
        pch = strtok(NULL, " ");
    }


    
    // string split_words[40];
    // size_t num_words = 0;
    // string tmp_word = "";

    // string sentence = "This is    a   \t     sentence";

    // for (size_t i = 0; i < sentence.length(); i++) {
    //     if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\n') {
    //         if (tmp_word.length() != 0) {
    //             split_words[num_words] = tmp_word;
    //             tmp_word = "";
    //             num_words++;
    //         }
    //     } else {
    //         tmp_word += sentence[i];
    //     }
    // }

    // if (tmp_word.length() != 0) {
    //     split_words[num_words] = tmp_word;
    //     tmp_word = "";
    //     num_words++;
    // }

    // for (size_t i = 0; i < num_words; i++) {
    //     cout << "split_words[" << i << "]: " << split_words[i] << endl;
    // }

    // fullnameagain = fullname;
    // for (size_t i = 0; i < strlen(fullname); i++) {
    //     fullnameagain[i] = fullname[i];
    // }
    // fullnameagain[strlen(fullname)] = '\0';

    // strcpy(fullnameagain, fullname);

    // cout << "fullnameagain: " << fullnameagain << endl;

    // string full_name = "Jeremy Bergen";

    // int counter = 0;
    // int i = 0;
    // while (fullname[i] != '\0') {
    //     counter++;
    //     i++;
    // }

    // cout << "full_name.length(): " << full_name.length() << endl;
    // cout << "full_name.length(): " << strlen(fullname) << endl;

    return 0;
}

void populate_array(int somearray[], const size_t &arr_size){
    for (size_t i = 0; i < arr_size; i++) {
        somearray[i] = i * 5;
    }
}


    // size_t arr_size = 10;
    // // int somenums[arr_size] = {};
    // int *somenums = new int[arr_size];
    // // int *morenums = new int[arr_size];
    // int morenums[arr_size] = {};

    // populate_array(somenums, arr_size);
    // // populate_array(morenums, arr_size);

    // cout << "somenums[4]: " << somenums[4] << endl;


    // for (size_t i = 0; i < arr_size; i++) {
    //     somenums[i] = i*5;
    // }

    // morenums = somenums;
    // cout << "somenums: " << somenums << endl;
    // // cout << "morenums[4]: " << morenums << endl;

    // // somenums[4] = 1024;
    // // cout << "morenums[4]: " << morenums[4] << endl;
    // for (size_t i = 0; i < arr_size; i++) {
    //     morenums[i] = somenums[i];
    // }

    // somenums[4] = 1024;
    // cout << "somenums[4]: " << somenums[4] << endl;
    // cout << "morenums[4]: " << morenums[4] << endl;

    // delete[] somenums;
    // delete[] morenums;

















    // unsigned long long *ptr = new unsigned long long[arr_size];

    // for (size_t i = 0; i < arr_size; i++) {
    //     somenums[i] = 0;
    // }
    // for (size_t i = 0; i < arr_size; i++) {
    //     ptr[i] = 0;
    // }

    // ptr[0] = 42;
    // ptr[1] = 15;

    // cout << "ptr[0]: " << ptr[0] << endl;

    // // delete[] ptr;

























    // size_t arr_size;
    // int somenum;
    
    // // arr_size = 5;
    
    // unsigned int somenumbers[50] = {42, 15, 29, 19, 1239244, 123, 51, 213};

    // arr_size = sizeof(somenumbers)/sizeof(int);

    // for (size_t i = 0; i < arr_size; i++) {
    //     cout << "somenumbers[" << i << "]: " << somenumbers[i] << endl;
    // }

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