#include <iostream>
using namespace std;
class Shape
 {
protected:
    float width;
    float height;

public:
    void setwidth(float w)
	 {
        width = w;
    }

    void setheight(float h) 
	{
        height = h;
    }
};

class Rectangle : public Shape {
public:
    float getarea() {
        return width * height;
    }
};

int main() {
    Rectangle rectangle;
    float width, height;

    cout << "Enter width of the rectangle: ";
    cin >> width;
    cout << "Enter height of the rectangle: ";
    cin >> height;

    rectangle.setwidth(width);
    rectangle.setheight(height);

    cout << "Area of the rectangle: " << rectangle.getarea() << endl;

    return 0;
}
