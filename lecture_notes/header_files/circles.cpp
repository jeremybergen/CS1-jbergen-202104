#include <cmath>
#include <iostream>

// using namespace std;
namespace circles {
    void prompt_radius(float &rad) {
        std::cout << "Please enter the radius of your circle: ";
        std::cin >> rad;
    }

    void calc_area(const float &rad, float &area) {
        area = M_PI * pow(rad, 2);
    }

    void calc_circum(const float &rad, float &circ) {
        circ = 2 * M_PI * rad;
    }

    void print_results(const float &rad, const float &area, const float &circ) {
        std::cout << "Your circle is: " << rad << std::endl;
        std::cout << "The area is: " << area << std::endl;
        std::cout << "The circumference is: " << circ << std::endl;
    }
}