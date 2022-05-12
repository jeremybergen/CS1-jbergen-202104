#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <random>

using namespace std;

struct Person {
    string fname;
    string lname;
};

void readdata(ifstream &, vector<Person> &);
void selectPresenter(vector<Person> &, string);

int main(int argc, char *argv[]) {
    srand(time(0));

    if (argc == 2 && (string)argv[1] == "test") {
        return 0;
    }
    string filename = "names.txt";
    ifstream fin(filename);
    vector<Person> people;

    readdata(fin, people);

    fin.close();

    selectPresenter(people, filename);
    
    return 0;
}

void selectPresenter(vector<Person> &people, string filename) {
    int randnum;
    ofstream fout(filename);
    randnum = rand()%people.size();
    cout << "The next presenter is....drumroll....(don't say drumroll)..." << endl;
    cout << people[randnum].fname << " " << people[randnum].lname << endl;
    people.erase(people.begin()+randnum);

    for (auto p1: people) {
        fout << p1.lname << ", " << p1.fname << endl;
    }

    fout.close();
}

void readdata(ifstream &fin, vector<Person> &people) {
    string in_line;
    while(getline(fin, in_line)) {
        Person p1;
        stringstream ss(in_line);
        string token;
        int count = 0;
        //https://www.codegrepper.com/code-examples/cpp/c%2B%2B+stringstream+delimiter
        while(getline(ss, token, ',')) {
            if (count == 0) {
                p1.lname = token;
            } else {
                token.erase(0,1);
                p1.fname = token;
            }
            count++;
        }
        people.push_back(p1);
    }
}