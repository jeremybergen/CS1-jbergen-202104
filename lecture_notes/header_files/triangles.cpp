#include <iostream>
#include <cmath>

namespace triangles {
    void prompt_sides(float &s1, float &s2, float &s3) {
        std::cout << "Please enter the three sides of your triangle: ";
        std::cin >> s1 >> s2 >> s3;
    }

    void print_results(const float &s1, const float &s2, const float &s3, const float &perim, const float &area) {
        std::cout << "Your triangle with sides " << s1 << ", " << s2 << ", " << s3
                  << " has an area of: " << area << " and a perimeter of: " << perim 
                  << std::endl;
    }

    void calc_perim(const float &s1, const float &s2, const float &s3, float &perim) {
        perim = s1 + s2 + s3;
    }

    void calc_area(const float &s1, const float &s2, const float &s3, float &area) {
        // semi-perim: s
        // sqrt(s(s-s1)(s-s2)(s-s3))
        float s = 0;

        calc_perim(s1, s2, s3, s);
        s = s/2;
        area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    }
}