#include <iostream>
using namespace std;

class MathOperations {
    public:
        int add(int num1, int num2) {
            return num1 + num2;
        }

        float add(float num1, float num2) {
            return num1 + num2;
        }

        int subtract(int num1, int num2) {
            return num1 - num2;
        }

        float subtract(float num1, float num2) {
            return num1 - num2;
        }

        int multiply(int num1, int num2) {
            return num1 * num2;
        }

        float multiply(float num1, float num2) {
            return num1 * num2;
        }

        float divide(int num1, int num2) {
            return static_cast<float>(num1) / num2;
        }

        float divide(float num1, float num2) {
            return num1 / num2;
        }
};

int main() {
    MathOperations mo;

    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Addition of " << num1 << " and " << num2 << " is: " << mo.add(num1, num2) << endl;
    cout << "Subtraction of " << num1 << " and " << num2 << " is: " << mo.subtract(num1, num2) << endl;
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << mo.multiply(num1, num2) << endl;
    cout << "Division of " << num1 << " and " << num2 << " is: " << mo.divide(num1, num2) << endl;

    float num3, num4;
    cout << "Enter two floating-point numbers: ";
    cin >> num3 >> num4;

    cout << "Addition of " << num3 << " and " << num4 << " is: " << mo.add(num3, num4) << endl;
    cout << "Subtraction of " << num3 << " and " << num4 << " is: " << mo.subtract(num3, num4) << endl;
    cout << "Multiplication of " << num3 << " and " << num4 << " is: " << mo.multiply(num3, num4) << endl;
    cout << "Division of " << num3 << " and " << num4 << " is: " << mo.divide(num3, num4) << endl;

    return 0;
}
