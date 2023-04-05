#include <iostream>
using namespace std;

inline int multiply(int x, int y) {
    return x * y;
}

inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << endl;

    int num3;
    cout << "Enter a number to find its cube: ";
    cin >> num3;
    cout << "Cube of " << num3 << " is: " << cube(num3) << endl;

    return 0;
}
