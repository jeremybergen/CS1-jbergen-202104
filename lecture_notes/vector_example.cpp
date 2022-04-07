#include <iostream>
#include <string>
#include <iterator>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    // size_t arr_size = 5;
    // int mynums[arr_size] = {0};
    vector<int> mynums;

    mynums.push_back(42);
    mynums.push_back(15);
    mynums.push_back(200);

    cout << mynums.size() << endl;

    mynums.pop_back();

    cout << mynums.size() << endl;
    // cout << mynums[0] << endl;

    return 0;
}