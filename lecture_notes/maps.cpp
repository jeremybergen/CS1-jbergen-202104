#include <iostream>
#include <string>
#include <map>

int main(int argc, char *argv[]) {
    std::map<int, std::string> int_to_str;

    int_to_str[5] = "five";
    int_to_str[1] = "one";
    int_to_str[2] = "two";

    // std::cout << int_to_str.size() << std::endl;
    // for (int i = 0; i < int_to_str.size(); i++) {
    //     std::cout << int_to_str[i] << std::endl;
    // }
    // for (auto i: int_to_str) {
    //     std::cout << i.first << ": " << i.second << std::endl;
    // }
    for (auto i = int_to_str.begin(); i != int_to_str.end(); i++) {
        std::cout << i->first << ": " << i->second << std::endl;
    }

    return 0;
}