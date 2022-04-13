#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main(int arcg, char *argv[]) {
    string fileline;
    // ifstream infile;
    // infile.open("myfile.txt");
    ifstream infile("files/myfile.txt");
    // ofstream outfile;
    // outfile.open("files/output_file.txt");
    ofstream outfile("files/output_file.txt", ios_base::app);

    int counter = 0;
    while (getline(infile, fileline)) {
        outfile << counter << ": " << fileline << endl;
        counter++;
    }

    // for (size_t i = 0; i < 5; i++) {
    //     getline(infile, fileline);
    //     cout << i << ": " << fileline << endl;
    // }

    infile.close();
    outfile.close();
    // string mystring = "This is my string";
    // stringstream mystream(mystring);
    // string words;

    // while (mystream >> words) {
    //     cout << words << endl;
    // }

    return 0;
}