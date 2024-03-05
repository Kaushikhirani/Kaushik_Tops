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

    int divide(int num1, int num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }

    float divide(float num1, float num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0.0f;
        }
    }
};

int main() {
    MathOperations math;

    int intNum1, intNum2;
    float floatNum1, floatNum2;

    cout << "Enter two integer numbers: ";
    cin >> intNum1 >> intNum2;

    cout << "Enter two floating-point numbers: ";
    cin >> floatNum1 >> floatNum2;

    cout << "Integer Addition: " << math.add(intNum1, intNum2) << endl;
    cout << "Integer Subtraction: " << math.subtract(intNum1, intNum2) << endl;
    cout << "Integer Multiplication: " << math.multiply(intNum1, intNum2) << endl;
    cout << "Integer Division: " << math.divide(intNum1, intNum2) << endl;

    cout << "Floating-point Addition: " << math.add(floatNum1, floatNum2) << endl;
    cout << "Floating-point Subtraction: " << math.subtract(floatNum1, floatNum2) << endl;
    cout << "Floating-point Multiplication: " << math.multiply(floatNum1, floatNum2) << endl;
    cout << "Floating-point Division: " << math.divide(floatNum1, floatNum2) << endl;

    return 0;
}
