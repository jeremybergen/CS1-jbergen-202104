/*
Name: Jeremy Bergen
Date: 02/28/22

Write a program that helps someone decide 
where to go eat lunch depending on amount of 
money one has in their pocket.
*/
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string prompt_name();
void greet(const string&);
float money_prompt();
string eat_location(const float&);
void eat_decision(const string&);
void tests();

int main(int argc, char* argv[]) {
    if (argc == 2 && (string) argv[1] == "test") {
        tests();
        return 0;
    }
    
    string firstName;
    string location;
    float pocket_money;

    if (argc == 3) {
        //./lunch_decision.out Jeremy 42
        firstName = (string) argv[1];
        pocket_money = atof(argv[2]);
        greet(firstName);
        cout << "You have $" << pocket_money << " in your pocket." << endl;
        location = eat_location(pocket_money);
        eat_decision(location);
    } else {
        firstName = prompt_name();
        greet(firstName);

        pocket_money = money_prompt();
        cout << "You have $" << pocket_money << " in your pocket." << endl;
        location = eat_location(pocket_money);
        eat_decision(location);
    }

    return 0;
}

void tests() {
    char passed[] = "passed";
    assert(eat_location(42) == "Devil's Kitchen");
    assert(eat_location(5) == "water");
    assert(eat_location(22) == "Spoons");
    
    printf("All test cases %s\n", passed);
}

string prompt_name() {
    string name;
    cout << "Hello, what is your first name? ";
    cin >> name;
    return name;
}

void greet(const string &name) {
    cout << "Hello " << name << ", welcome to your lunch decision maker!" << endl;
}

float money_prompt() {
    float money;
    cout << "How much money do you have? ";
    cin >> money;
    return money;
}

string eat_location(const float &money) {
    /*
    Taco Bell       = 7
    Qdoba           = 11
    Spoons          = 18
    Devil's Kitchen = 40
    No Coast Sushi  = 83
    */
    if (money >= 83) {
        return "No Coast Sushi";
    } else if (money >= 40) {
        return "Devil's Kitchen";
    } else if (money >= 18) {
        return "Spoons";
    } else if (money >= 11) {
        return "Qdoba";
    } else if (money >= 7) {
        return "Taco Bell";
    } else {
        return "water";
    }
}

void eat_decision(const string &location) {
    if (location == "No Coast Sushi") {
        cout << "You should go eat at No Coast Sushi!" << endl;
    } else if (location == "Devil's Kitchen") {
        cout << "Take the long walk to Devil's Kitchen" << endl;
    } else if (location == "Spoons") {
        cout << "Go get some biscuts and gravy with green chili at Spoons" << endl;
    } else if (location == "Qdoba") {
        cout << "Get a quesadilla with queso at Qdoba" << endl;
    } else if (location == "Taco Bell") {
        cout << "Eat a couple tacos at Taco Bell" << endl;
    } else {
        cout << "Fill up on water at the hose" << endl;
    }
}