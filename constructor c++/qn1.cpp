#include <iostream>
using namespace std;

inline int multiply(int a, int b)
 {
    return a * b;
}

inline int cubic(int a)
 {
    return a * a * a;
}

int main()
 {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Multiplication value: " << multiply(num1, num2) << endl;

    cout << "Enter a number to find its cubic value: ";
    cin >> num1;

    cout << "Cubic value: " << cubic(num1) << endl;

    return 0;
}
