#include<iostream>
using namespace std;

class Number {
    private:
        int num;
    public:
        Number(int n) {
            num = n;
        }
        friend int max(Number n1, Number n2); // friend function declaration
};

// Friend function definition to find maximum of two numbers
int max(Number n1, Number n2) {
    if(n1.num > n2.num) {
        return n1.num;
    }
    else {
        return n2.num;
    }
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Create objects of Number class
    Number n1(num1), n2(num2);

    // Call friend function to find the maximum of two numbers
    int max_num = max(n1, n2);

    cout << "Maximum number: " << max_num << endl;

    return 0;
}
