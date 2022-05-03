#include <iostream>
#include <string>
#include "headers/rectangles.h"
#include "headers/greeting.h"
#include "headers/circles.h"
#include "headers/triangles.h"

// using namespace std;

void calc_rect();
void calc_circ();
void calc_tri();
void calc_choice();
bool runagain();

int main(int argc, char *argv[]) {
    std::string name;
    bool again = true;

    name = prompt_name();
    greet_person(name);

    while (again) {
        calc_choice();
        again = runagain();
    }

    return 0;
}

bool runagain() {
    char again;
    std::cout << "Do you want to calculate a different shape? ";
    std::cin >> again;
    if (again == 'y' || again == 'Y') {
        return true;
    }
    return false;
}

void calc_choice() {
    int choice = 0;
    std::cout << "Please enter a choice to calculate:" << std::endl
              << "1: Rectangle" << std::endl
              << "2: Circle" << std::endl
              << "3: Triangle" << std::endl;
    std::cin >> choice;
    switch(choice) {
        case 1: {
            calc_rect();
            break;
        }
        case 2: {
            calc_circ();
            break;
        }
        case 3: {
            calc_tri();
            break;
        }
        default: {
            std::cout << "You did not enter a valid option." << std::endl;
        }
    }

}

void calc_rect() {
    float side1, side2;
    float area, perim;
    rectangles::rectangle_sides(side1, side2);
    rectangles::calc_area(side1, side2, area);
    rectangles::calc_perim(side1, side2, perim);
    rectangles::print_rectangle(side1, side2, area, perim);
}

void calc_circ() {
    float radius;
    float area, perim;
    circles::prompt_radius(radius);
    circles::calc_area(radius, area);
    circles::calc_circum(radius, perim);
    circles::print_results(radius, area, perim);
}

void calc_tri() {
    float side1, side2, side3;
    float area, perim;
    triangles::prompt_sides(side1, side2, side3);
    triangles::calc_perim(side1, side2, side3, perim);
    triangles::calc_area(side1, side2, side3, area);
    triangles::print_results(side1, side2, side3, perim, area);
}