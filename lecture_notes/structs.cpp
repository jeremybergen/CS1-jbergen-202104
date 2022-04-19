#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// struct Person {
//     int student_id;
//     string lastname;
//     string firstname;
//     char mi;
//     float grade;
// };

struct Point {
    float x;
    float y;

    void myfunction(string name) {
        cout << "Hello " << name << endl;
    }
};

int main(int argc, char *argv[]) {
    Point origin = {0, 0};
    Point pt1, pt2, pt3;

    pt1 = {4, 2};
    
    pt2 = Point({-4, -2});
    
    pt3.x = 42;
    pt3.y = 24;

    char ch;
    double distance;

    pt1.myfunction("Jeremy");

    // cout << "Please enter a point in the format (x, y): ";
    // cin >> ch >> pt1.x >> ch >> pt1.y >> ch;

    // cout << "Please enter a point in the format (x, y): ";
    // cin >> ch >> pt2.x >> ch >> pt2.y >> ch;

    distance = sqrt(pow((pt1.x - pt2.x), 2) + pow((pt1.y - pt2.y), 2));

    // cout << "The distance between (" << origin.x << ", " << origin.y << ") and "
    //      << "(" << pt1.x << ", " << pt1.y << ") is: " << distance << endl;
    printf("The distance between (%f, %f) and (%f, %f) is: %f\n", pt2.x, pt2.y, pt1.x, pt1.y, distance);


    return 0;
}

    // Person student1;
    // Person student2 = {24, "Cochran", "David", 'A'};

    // student1.firstname = "Jeremy";
    // student1.student_id = 42;
    // student1.lastname = "Bergen";

    // student1.mi = 'J';
    // student1.grade = 3.8;

    // cout << "The student id is: " << student1.student_id << endl;
    // cout << "Your name is: " 
    //      << student1.firstname << " " << student1.mi << " " << student1.lastname << endl;
    // cout << "The student grade is: " << student1.grade << endl;

    // cout << "student2 id is: " << student2.student_id << endl;
    // cout << "student2 name is: " 
    //      << student2.firstname << " " << student2.mi << " " << student2.lastname << endl;