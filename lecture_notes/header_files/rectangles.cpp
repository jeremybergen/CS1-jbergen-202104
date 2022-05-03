#include <iostream>
#include <string>

// using namespace std;
namespace rectangles {
    void print_rectangle(const float &side1, const float &side2, const float &area, const float &perim) {
        std::cout << "Your rectangle is: " << side1 << " " << side2 << std::endl;
        std::cout << "The area is: " << area << std::endl;
        std::cout << "The perimeter is: " << perim << std::endl;
    }

    void calc_perim(const float &s1, const float &s2, float &perim) {
        perim = (2*s1) + (2*s2);
    }

    void calc_area(const float &s1, const float &s2, float &area) {
        area = s1*s2;
    }

    void rectangle_sides(float &s1, float &s2) {
        std::cout << "Please enter two sides of a rectangle separated by a space: ";
        std::cin >> s1 >> s2;
    }
}