#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Person {
    string fname;
    string lname;
};

int main(int argc, char *argv[]) {
    if (argc == 2 && (string)argv[1] == "test") {
        return 0;
    }
    string filename = "names.txt";
    ifstream fin(filename);
    string in_line;

    while(getline(fin, in_line)) {

    }
//https://www.codegrepper.com/code-examples/cpp/c%2B%2B+stringstream+delimiter
//     #include <iostream>
// #include <sstream>

// std::string input = "abc,def,ghi";
// std::istringstream ss(input);
// std::string token;

// while(std::getline(ss, token, ',')) {
//     std::cout << token << '\n';
// }

    return 0;
}