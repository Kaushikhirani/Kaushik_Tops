#include <iostream>

using namespace std;

class Calculator
 {
public:
    int add(int a, int b) 
	{
        return a + b;
    }

    int subtract(int a, int b)
	 {
        return a - b;
    }

    int multiply(int a, int b)
	 {
        return a * b;
    }

    float divide(float a, float b)
	 {
        if (b != 0)
            return a / b;
        else
		 {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main()
 {
    Calculator calc;
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op)
	 {
        case '+':
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
