#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    string in_line;
    ifstream fin;
    ofstream fout;
    // char tmpchar;

    // vector<char> buffer;
    // char *buffer = new char[10];

    if ((string)argv[1] == "-f") {
        fin.open(argv[2]);
        // fin.open(argv[2]);
        // cout << "fin.is_open(): " << fin.is_open() << endl;
        if (!fin.is_open()) {
            cout << "Invalid input file" << endl;
            return 0;
        }
    }

    fin.seekg(0, ios_base::end);
    // cout << fin.tellg() << endl;
    size_t filesize = fin.tellg();
    fin.seekg(0);

    int remaining  = filesize;
    int read_data = 0;
    while (remaining > 0) {
        char *buffer = new char[10];

        fin.read(buffer, 10);
        read_data = fin.gcount();
        cout << read_data << endl;
        // cout << buffer;
        remaining -= read_data;

        delete[] buffer;
    }

    // fin.read(buffer, filesize);
    // cout << buffer << endl;
    // for (size_t i = 0; i < 202; i++) {
    //     cout << buffer[i] << endl;
    // }
    // if (argc == 5 && (string)argv[3] == "-o") {
    //     fout.open(argv[4]);
    //     // cout << "fout.is_open(): " << fout.is_open() << endl;
    //     if (!fout.is_open()) {
    //         cout << "Invalid output file" << endl;
    //         return 0;
    //     }
    // }

    // while ((tmpchar = fin.get())) {
    //     if (fin.eof()) {
    //         break;
    //     }
    //     cout << "tmpchar: " << tmpchar << endl;
    //     buffer.push_back(tmpchar);
    // }

    // for (auto ele: buffer) {
    //     cout << ele << endl;
    // }

    // while (getline(fin, in_line)) {
    //     // cout << "DEBUG: " << in_line << endl;
    //     fout << "from file: " << in_line << endl;
    // }

    // ifstream fin("files/myfile.txt");
    // ofstream fout("files/output_file.txt", ios_base::app);
    // fstream file_stream("files/myfile.txt", ios_base::in|ios_base::out|ios_base::app);

    // file_stream << "This is a sample line from the program" << endl;

    // size_t counter = 0;
    // while (getline(file_stream, in_line)) {
    //     file_lines[counter] = in_line;
    //     counter++;
    // }

    // for (size_t i = 0; i < counter; i++) {
    //     fout << i+1 << ": " << file_lines[i] << endl;
    // }

    // file_stream.close();
    fin.close();
    fout.close();
    // delete[] buffer;

    return 0;
}

















    // string fileline;
    // // ifstream infile;
    // // infile.open("myfile.txt");
    // ifstream infile("files/myfile.txt");
    // // ofstream outfile;
    // // outfile.open("files/output_file.txt");
    // ofstream outfile("files/output_file.txt", ios_base::app);

    // int counter = 0;
    // while (getline(infile, fileline)) {
    //     outfile << counter << ": " << fileline << endl;
    //     counter++;
    // }

    // // for (size_t i = 0; i < 5; i++) {
    // //     getline(infile, fileline);
    // //     cout << i << ": " << fileline << endl;
    // // }

    // infile.close();
    // outfile.close();
    // // string mystring = "This is my string";
    // // stringstream mystream(mystring);
    // // string words;

    // // while (mystream >> words) {
    // //     cout << words << endl;
    // // }