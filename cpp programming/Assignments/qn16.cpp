#include <iostream>

using namespace std;

class Number {
    private:
        int num;
    public:
        Number(int n) {
            num = n;
        }
        Number operator+(Number n2) {
            return Number(num + n2.num);
        }
        Number operator-(Number n2) {
            return Number(num - n2.num);
        }
        Number operator*(Number n2) {
            return Number(num * n2.num);
        }
        void display() {
            cout << "Result: " << num << endl;
        }
};

int main() {
    int num1, num2, choice;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    Number n1(num1), n2(num2), result(0);
    cout << "Choose an operation to perform:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cin >> choice;
    switch (choice) {
        case 1:
            result = n1 + n2;
            break;
        case 2:
            result = n1 - n2;
            break;
        case 3:
            result = n1 * n2;
            break;
        default:
            cout << "Invalid choice" << endl;
            return 0;
    }
    result.display();
    return 0;
}
