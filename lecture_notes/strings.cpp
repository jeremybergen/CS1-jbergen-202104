#include <iostream>
#include <string>
#include <cctype>

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

    // "Jeremy Bergen"
    fullname = firstname + " " + lastname;
    size_t i = 0;

    string title = "The Almight Tallest";

    // cout << fullname.find("Bergen") << endl;
    cout << fullname << endl;
    fullname.insert(fullname.find("Bergen"), title);
    fullname.insert(fullname.find("Bergen") + title.size(), 1, ' ');
    cout << fullname << endl;
    // cout << fullname << endl;
    // fullname.insert(7, title);
    // fullname.insert(7 + title.size(), 1, ' ');
    // cout << fullname << endl;














    // for (auto it = fullname.rbegin(); it != fullname.rend(); it++) {
    //     cout << *it << endl;
    // }
    // for (auto ch: fullname) {
    //     cout << "ch: " << ch << endl;
    // }

    // for (size_t i = 0; i < fullname.size(); i++) {
    //     cout << "fullname[" << i << "]: " << fullname[i] << endl;
    // }













    // while (fullname[i] != '\0') {
    //     cout << i << ": " << fullname[i] << endl;
    //     i++;
    // }

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