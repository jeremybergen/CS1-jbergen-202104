#include <iostream>
#include <string>
#include <map>

using namespace std;

struct Person {
    string fname;
    string lname;
    char mi;
};

int main(int argc, char *argv[]) {
    map<char, Person> int_to_str;


    Person p1 = {"Jeremy", "Bergen", 'J'};
    int_to_str['j'] = p1;

    Person p2 = {"Bob", "Builder", 'B'};
    int_to_str['b'] = p2;

    auto it = int_to_str.find('b');
    if (it != int_to_str.end()) {
        cout << it->first << ": " << it->second.fname << endl;
    }

    // cout << int_to_str[700999999].fname << endl;
    // cout << &int_to_str << endl;
    // cout << &int_to_str['j'] << endl;
    // cout << &int_to_str['b'] << endl;
    // cout << int_to_str.count('A') << endl;
    // if (int_to_str.count('j') == 1) {
    //     cout << int_to_str['a'].fname << endl;
    // }

    // int_to_str[42] = "forty-two";
    // int_to_str[7] = "seven";
    // int_to_str[1] = "one";

    // for (auto ele: int_to_str) {
    //     cout << ele.first << ": " << ele.second << endl;
    // }
    // for (auto ele = int_to_str.begin(); ele != int_to_str.end(); ele++) {
    //     cout << ele->first << ": " << ele->second << endl;
    // }


    return 0;
}



















    // std::map<int, std::string> int_to_str;

    // int_to_str[5] = "five";
    // int_to_str[1] = "one";
    // int_to_str[2] = "two";

    // // std::cout << int_to_str.size() << std::endl;
    // // for (int i = 0; i < int_to_str.size(); i++) {
    // //     std::cout << int_to_str[i] << std::endl;
    // // }
    // // for (auto i: int_to_str) {
    // //     std::cout << i.first << ": " << i.second << std::endl;
    // // }
    // for (auto i = int_to_str.begin(); i != int_to_str.end(); i++) {
    //     std::cout << i->first << ": " << i->second << std::endl;
    // }