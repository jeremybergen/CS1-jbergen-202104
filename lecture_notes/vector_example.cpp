#include <iostream>
#include <string>
#include <iterator>
#include <vector>

using namespace std;

template <class t1>
void findaverage(const vector<t1>&);

int main(int argc, char *argv[]) {
    vector<double> mynums = {42.5, 15.2, 7.45, 23.75, 5.6};

    mynums.push_back(123.75);

    findaverage<double>(mynums);

    // for (size_t i = 0; i < mynums.size(); i++) {
    //     if (mynums.at(i) == 7) {
    //         mynums.erase(mynums.begin()+i);
    //     }
    // }

    // for (size_t i = 0; i < mynums.size(); i++) {
    //     cout << mynums.at(i) << endl;
    // }
    // for (auto ele: mynums) {
    //     cout << ele << endl;
    // }
    // for (auto iter = mynums.end()-1; iter != mynums.begin()-1; iter--) {
    //     cout << *iter << endl;
    // }

    return 0;
}

template <class t1>
void findaverage(const vector<t1> &numbers) {
    t1 total = 0;
    for (auto ele: numbers) {
        total += ele;
    }
    cout << "The average of your numbers is: " << (double)total/numbers.size() << endl;
}