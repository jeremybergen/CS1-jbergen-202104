#include <iostream>
#include <random>

using namespace std;

int main(int argc, char *argv[]) {
    int num;
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        num = rand()%20+1;
        cout << "num " << i << ": " << num << endl;
    }
    return 0;
}