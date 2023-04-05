#include <iostream>
using namespace std;

class Math {
public:
    int factorial(int n) {
        if (n == 0)
            return 1;
        else
            return n * factorial(n - 1);
    }

    int fibonacci(int n) {
        if (n == 0)
            return 0;
        else if (n == 1)
            return 1;
        else
            return fibonacci(n - 1) + fibonacci(n - 2);
    }
};

int main() {
    Math math;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial of " << n << " is " << math.factorial(n) << endl;
    cout << "Fibonacci number at position " << n << " is " << math.fibonacci(n) << endl;

    return 0;
}
