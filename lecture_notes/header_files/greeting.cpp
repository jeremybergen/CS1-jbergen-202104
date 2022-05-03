#include <iostream>
#include <string>

// using namespace std;

void greet_person(const std::string &name) {
    std::cout << "Welcome " << name << " we will calculate some shapes." << std::endl;
}

std::string prompt_name() {
    std::string name;
    std::cout << "Please enter your first name: ";
    std::cin >> name;
    return name;
}