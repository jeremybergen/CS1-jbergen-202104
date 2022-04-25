#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

template<class T1>
struct Node{
    T1 num;
    Node *head;
    Node *tail;
};

void print_list(Node<float> *);

void delete_list(Node<float> *);

// void insert_list(Node<float> **, Node<float> *);

int main(int argc, char *argv[]) {
    Node<float> *first = new Node<float>();
    Node<float> *second = new Node<float>();
    Node<float> *third = new Node<float>();

    first->head = nullptr;
    first->num = 42.5;
    first->tail = second;

    second->head = first;
    second->num = 84;
    second->tail = third;

    third->head = second;
    third->num = 23;
    third->tail = nullptr;

    // cout << first->next->next->num << endl;
    cout << "Before inserting a num: " << endl;
    print_list(first);

    Node<float> *newnum = new Node<float>();
    
    second->tail = newnum;
    newnum->head = second;
    newnum->num = 7;
    newnum->tail = third;
    third->head = newnum;

    cout << "After inserting a num:" << endl;
    print_list(first);

    delete_list(first);
    // delete first;
    // delete second;
    // delete third;
    // delete newnum;
    return 0;
}

void delete_list(Node<float> *node) {
    Node<float> *tmp = new Node<float>();
    tmp = node;
    while(tmp->tail != nullptr) {
        delete tmp->head;
        tmp = tmp->tail;
    }
    delete tmp;
}

void print_list(Node<float> *node) {
    Node<float> *tmp = new Node<float>();
    tmp = node;
    while (tmp->tail != nullptr) {
        cout << tmp->num << endl;
        tmp = tmp->tail;
    }
    cout << tmp->num << endl;
}























// // namespace myCircle {
// //     // template<class T1, class T2>
// //     struct Circle {
// //         float radius;
// //         float x, y;

// //         double area;
// //         double perimeter;

// //         int num[10];
// //         vector<int> num2;
// //         Circle *newcircle;
// //     };
// // }

// // namespace yourCircle {
// //     template<class T1, class T2>
// //     struct Circle {
// //         T1 diameter;
// //         T1 x, y;

// //         T2 volume;
// //         T2 perimeter;

// //         int num[10];

// //     };
// // }
// // void calc_circle(Circle&);

// int main(int argc, char *argv[]) {
//     size_t arr_size = 10;
//     myCircle::Circle circle_array[arr_size];
//     // Circle<int, double> *circle_array = new Circle<int, double>[arr_size];
//     // vector< Circle<int, double> > circle_array;

//     myCircle::Circle circle1;
//     myCircle::Circle c2 = {24, 0, 0};
//     myCircle::Circle *c3 = new myCircle::Circle({2, 4, 5});

//     // yourCircle::Circle<int, double> yc1;

//     // yc1.diameter = 84;

//     circle1.radius = 42.5;
//     circle1.x = 2;
//     circle1.y = 4;
//     circle1.num[0] = 42;
//     circle1.num[1] = 24;
//     circle1.num2.push_back(42);
//     circle1.num2.push_back(84);

//     c3->num2.push_back(42);

//     circle_array[0] = circle1;
//     circle_array[1] = c2;
//     circle_array[2] = *c3;

//     // circle_array.push_back(circle1);
//     // circle_array.push_back(c2);
//     // circle_array.push_back(*c3);

//     for (size_t i = 0; i < 3; i++) {
//         cout << i << ": " << circle_array[i].radius << endl;
//     }
//     // cout << circle1.radius << ":" << circle1.x << ":" << circle1.y << endl;

//     // c3->radius = 2;
//     // c3->x = 4;
//     // c3->y = 5;

//     // calc_circle(circle1);
//     // calc_circle(c2);
//     // calc_circle(*c3);
//     // circle1.area = M_PI * pow(circle1.radius, 2);
//     // cout << "The circle at point (" << circle1.x << ", " << circle1.y << ") with radius "
//     //      << circle1.radius << " has an area of: " << circle1.area << endl;
//     // printf("The circle at point (%f, %f) with radius %f has an area of: %f\n", c3->x, c3->y, c3->radius, c3->area);
//     // printf("The circle at point (%f, %f) with radius %f has an area of: %f\n", circle1.x, circle1.y, circle1.radius, circle1.area);
//     // printf("The circle at point (%f, %f) with radius %f has an area of: %f\n", c2.x, c2.y, c2.radius, c2.area);
//     // cout << "Memory address: " << &circle1 << endl;
//     // cout << "Memory address circle1.radius: " << &circle1.radius << endl;
//     // cout << "Memory address circle1.x: " << &circle1.x << endl;
//     // cout << "Memory address circle1.y: " << &circle1.y << endl;
//     // cout << "Memory address circle1.area: " << &circle1.area << endl;

//     // delete[] circle_array;
//     delete c3;
//     return 0;
// }

// // void calc_circle(Circle &c) {
// //     c.area = M_PI * pow(c.radius, 2);
// //     c.perimeter = 2 * M_PI * c.radius;
// // }