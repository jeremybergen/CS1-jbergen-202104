#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

void split_words(vector<string>&, const string&);
void tests();

int main(int argc, char *argv[]) {
    if (argc == 2 && (string)argv[1] == "test") {
        tests();
        return 0;
    }

    vector<string> mywords = {};
    // string word;
    // string mysentence = "This is my example sentence";
    string mysentence = "Professor Bergen is the most awesome person in the world!";

    split_words(mywords, mysentence);
    // stringstream ss(mysentence);
    // int nums;
    // while (cin >> nums) {
    //     cout << nums << endl;
    // }

    // while (ss >> word) {
    //     // cout << word << endl;
    //     mywords.push_back(word);
    // }

    for (auto ele: mywords) {
        cout << ele << endl;
    }

    return 0;
}

void split_words(vector<string>& words, const string& in_str) {
    string word;
    stringstream ss(in_str);
    while (ss >> word) {
        words.push_back(word);
    }
}

void tests() {
    vector<string> answer;
    vector<string> expected = {"This", "is", "a", "sentence"};
    split_words(answer, "This is a sentence");
    assert(answer == expected);

    answer.clear();
    expected = {"Yet", "another", "test", "case"};
    split_words(answer, "Yet another test case");
    assert(answer == expected);

    answer.clear();
    expected = {"Some", "third", "case", "test"};
    split_words(answer, "Some third case test");
    assert(answer == expected);

    cout << "All test cases passed" << endl;
}