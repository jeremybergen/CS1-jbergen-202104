#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    // char somestring[] = "This is a c-string";
    size_t stringlength = 0;
    string firstname = "Jeremy";
    string lastname = "Bergen";
    string fullname;
    

    // char firstname[] = "Jeremy";
    // char lastname[] = "Bergen";
    // char fullname[] = "";

    fullname = firstname + " " + lastname;
    size_t i = 0;
    while (fullname[i] != '\0') {
        cout << i << ": " << fullname[i] << endl;
        i++;
    }

    // stringlength = fullname.length();
    // cout << "The length of our string is: " << stringlength << endl;

    // for (size_t i = 0; i < stringlength; i++) {
    //     if (i == 7) {
    //         fullname.at(i) = 'W';
    //     }
    //     // cout << i << ": " << fullname.at(i) << endl;
    //     // cout << i << ": " << fullname[i] << endl;
    // }
    // fullname.at(0) = 'D';
    // cout << "Your full name is: " << fullname << endl;

    // cout << "Your full name is: " << fullname[0] << endl;
    // cout << "Your full name is: " << fullname[1] << endl;
    // cout << "Your full name is: " << fullname[2] << endl;
    // cout << "Your full name is: " << fullname[3] << endl;
    return 0;
}