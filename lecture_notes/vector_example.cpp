#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

template <class t1>
void findaverage(const vector<t1>&, vector<t1>&);

int main(int argc, char *argv[]) {
    vector<int> mynums = {1862, 42, 30, 50, 12, 6};
    int mynums2[6] = {1862, 42, 30, 50, 12, 6};
    sort(begin(mynums2), end(mynums2));

    for (auto ele: mynums2) {
        cout << ele << endl;
    }
    // vector< vector<int> > mynums;

    // mynums.push_back({42, 15, 23, 75});
    // mynums.push_back({123, 1});
    // mynums[1].push_back(42);

    // //[[42, 15, 23, 75], [123, 321, 965, 1]]
    // for (auto ele: mynums) {
    //     for (auto ele2: ele) {
    //         cout << ele2 << endl;
    //     }
    // }
    // for (auto ele: mynums[1]) {
    //     cout << ele << endl;
    // }

    // vector<double> othernums = {};
    // vector<double> mynums = {42.5, 15.2, 7.45, 23.75, 5.6};

    // mynums.push_back(123.75);

    // findaverage<double>(mynums, othernums);

    // for (auto ele: othernums) {
    //     cout << ele << endl;
    // }

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
void findaverage(const vector<t1> &numbers, vector<t1> &morenums) {
    t1 total = 0;
    for (auto ele: numbers) {
        total += ele;
        morenums.push_back(total);
    }
    cout << "The average of your numbers is: " << (double)total/numbers.size() << endl;
}