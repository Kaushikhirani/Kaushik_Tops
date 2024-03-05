#include <iostream>

using namespace std;

class Circle
 {
private:
    double radius;

public:
    Circle(double r)
	 {
        radius = r;
    }

    double area()
	 {
        return 3.14 * radius * radius;
    }

    double circumference() {
        return 2 * 3.14 * radius;
    }
};

int main()
 {
    double radius;

    
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    
    Circle circle(radius);

    
    cout << "Area of the circle: " << circle.area() << endl;

    
    cout << "Circumference of the circle: " << circle.circumference() << endl;

    return 0;
}
