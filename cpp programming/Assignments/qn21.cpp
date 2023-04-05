#include<iostream>
using namespace std;

// Inline function to find the multiplication value
inline int multiply(int x, int y) {
    return x * y;
}

// Inline function to find the cubic value
inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Find the multiplication value using inline function
    int result1 = multiply(num1, num2);
    cout << "Multiplication value: " << result1 << endl;

    // Find the cubic value using inline function
    int result2 = cube(num1);
    cout << "Cubic value of first number: " << result2 << endl;
    result2 = cube(num2);
    cout << "Cubic value of second number: " << result2 << endl;

    return 0;
}
