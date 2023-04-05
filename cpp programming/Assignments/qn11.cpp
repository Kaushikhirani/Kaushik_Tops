#include <iostream>
using namespace std;

class AreaCalculator {
    public:
        float calculateArea(float radius) {
            return 3.14159 * radius * radius;
        }
        
        float calculateArea(float length, float breadth) {
            return length * breadth;
        }

        float calculateArea(float base, float height, char c) {
            return 0.5 * base * height;
        }
};

int main() {
    AreaCalculator ac;

    // Calculating area of circle
    float radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle is: " << ac.calculateArea(radius) << endl;

    // Calculating area of rectangle
    float length, breadth;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of the rectangle is: " << ac.calculateArea(length, breadth) << endl;

    // Calculating area of triangle
    float base, height;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle is: " << ac.calculateArea(base, height, 't') << endl;

    return 0;
}
