#include <iostream>
using namespace std;

class Triangle
 {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3)
	 {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    string gettype()
	 {
        if (side1 == side2 && side2 == side3) 
		{
            return "Equilateral";
        } else if (side1 == side2 || side1 == side3 || side2 == side3)
		 {
            return "Isosceles";
        } else {
            return "Scalene";
        }
    }
};

int main() 
{
    double s1, s2, s3;

    cout << "Enter lengths of three sides of triangle: ";
    cin >> s1 >> s2 >> s3;

    Triangle triangle(s1, s2, s3);

    cout << "Triangle type: " << triangle.gettype() << endl;

    return 0;
}
