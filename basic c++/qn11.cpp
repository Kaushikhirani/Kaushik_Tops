#include <iostream>
using namespace std;
#define PI 3.14159

double area(double radius)
 {
    return PI * radius * radius;
}

double area(double length, double breadth)
 {
    return length * breadth;
}

double area(double base, double height, std::string shape)
 {
    if (shape == "triangle")
	 {
        return 0.5 * base * height;
    } 
	else
	 {
        return 0; 
    }
}

int main() 
{
    double radius = 5.0;
    double length = 4.0;
    double breadth = 3.0;
    double base = 6.0;
    double height = 8.0;

    cout << "Area of Circle: " << area(radius) <<endl;
    cout << "Area of Rectangle: " << area(length, breadth) << endl;
    cout << "Area of Triangle: " << area(base, height, "triangle") << endl;

    return 0;
}
