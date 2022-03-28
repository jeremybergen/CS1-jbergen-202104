#include <iostream>
#include <string>
#include <cctype>

using namespace std;

unsigned short find_needle(string);

int main(int argc, char *argv[]) {
    // char somestring[] = "This is a c-string";
    size_t stringlength = 0;
    string firstname = "Jeremy";
    string lastname = "Bergen";
    string fullname;
    string search_val;

    string haystack = "There are maanny needle or just needle a few needle in the haystack!";

    // cout << "The first needle is: " << haystack.find("needle") << endl;
    // cout << "The second needle is: " << haystack.rfind("needle") << endl;
    // cout << "The middle needle is: " << haystack.find("needle", haystack.find("needle") + 1)<< endl;

    unsigned short count = 0;
    count = find_needle(haystack);
    cout << "There are " << count << " needles in the haystack!" << endl;

    // char firstname[] = "Jeremy";
    // char lastname[] = "Bergen";
    // char fullname[] = "";

    // "Jeremy Bergen"
    // fullname = firstname + " " + lastname;
    // size_t i = 0;

    // string title = "The Almighty Tallest";

    // cout << fullname.find("Bergen") << endl;
    // Jeremy "The Almighty Tallest" Bergen
    // cout << fullname << endl;
    // cout << "Please enter a string to search for: ";
    // cin >> search_val;
    // if (fullname.find(search_val) != string::npos) {
    //     cout << "Your search string: " << search_val << " was found at index " << fullname.find(search_val) << endl;
    // } else {
    //     cout << "Your string was not found." << endl;
    // }

    // fullname.insert(fullname.find("Bergen"), title);
    // fullname.insert(fullname.find(title), 1, '"');
    // fullname.insert(fullname.find(title) + title.length(), 1, '"');
    // fullname.insert(fullname.find("Bergen"), 1, ' ');

    // cout << fullname << endl;
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

unsigned short find_needle(string haystack) {
    unsigned short count = 0;
    while (haystack.find("needle") != string::npos) {
        cout << "DEBUG: sub_haystack = " << haystack << endl;
        count++;
        haystack = haystack.substr(haystack.find("needle") + 1);
    }
    return count;
}