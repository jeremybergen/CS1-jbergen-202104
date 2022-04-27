#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

struct Student {
    string fname;
    string lname;
    int g1, g2, g3, g4;
};

int readdata(ifstream &, Student[], const size_t &);
void printdata(Student[], const size_t &);

int main(int argc, char *argv[]) {
    size_t arr_size = 10;
    size_t num_students = 0;
    Student students[arr_size];

    ifstream fin("studentdata.csv");
    
    num_students = readdata(fin, students, arr_size);

    // printdata(students, num_students);

    return 0;
}

void printdata(Student students[], const size_t &arr_size) {
    for (size_t i = 0; i < arr_size; i++) {
        cout << "First name: " << students[i].fname << endl;
        cout << "Last name: " << students[i].lname << endl;
        cout << "Grade 1: " << students[i].g1 << endl;
        cout << "Grade 2: " << students[i].g2 << endl;
        cout << "Grade 3: " << students[i].g3 << endl;
        cout << "Grade 4: " << students[i].g4 << endl;
        cout << "--------------------------" << endl;
    }
}

int readdata(ifstream &fin, Student students[], const size_t &arr_size) {
    // start reading data into struct
    string tmpline;
    size_t count = 0;
    while (getline(fin, tmpline)) {
        Student student;
        int found = 0;
        int linepos = 0;
        while (tmpline.find(',') != string::npos) {
            found = tmpline.find(',');
            if (tmpcount == 0) {
                student.fname = tmpline.substr(0, found);
            } else if (tmpcount == 1) {
                student.lname = tmpline.substr(0, found);
            }
            tmpline = tmpline.substr(found+1);
            linepos++;
        }
        cout << endl;
        // cout << tmpline.find(',');
        // int found = tmpline.find(',');
        // student.fname = tmpline.substr(0, found);
        // tmpline = tmpline.substr(found+1);

        // found = tmpline.find(',');
        // student.lname = tmpline.substr(0, found);
        // cout << student.fname << student.lname << endl;
        // cout << tmpline << endl;
        // stringstream ss(tmpline);
        // ss >> student.fname >> student.lname >> student.g1 >> student.g2 >> student.g3 >> student.g4;
        // cout << student.fname << student.lname << student.g1 << student.g2 << student.g3 << student.g4 << endl;
        // students[count] = student;
        // count++;
    }
    // return count;
}