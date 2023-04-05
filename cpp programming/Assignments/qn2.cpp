#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int num1, int num2) {
        return num1 + num2;
    }

    int subtract(int num1, int num2) {
        return num1 - num2;
    }

    int multiply(int num1, int num2) {
        return num1 * num2;
    }

    float divide(int num1, int num2) {
        if (num2 == 0) {
            cout << "Error: division by zero." << endl;
            return 0;
        } else {
            return (float) num1 / num2;
        }
    }
};

int main() {
    Calculator calc;

    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) << endl;
    cout << "Division: " << calc.divide(num1, num2) << endl;

    return 0;
}
