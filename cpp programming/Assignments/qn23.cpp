#include<iostream>
using namespace std;

class Number {
    private:
        int num;
    public:
        Number(int n) {
            num = n;
        }
        friend void swap(Number &n1, Number &n2); // friend function declaration
        void display() {
            cout << "Number: " << num << endl;
        }
};

// Friend function definition to swap two numbers
void swap(Number &n1, Number &n2) {
    int temp = n1.num;
    n1.num = n2.num;
    n2.num = temp;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Create objects of Number class
    Number n1(num1), n2(num2);

    cout << "Before swapping: " << endl;
    n1.display();
    n2.display();

    // Call friend function to swap the two numbers
    swap(n1, n2);

    cout << "After swapping: " << endl;
    n1.display();
    n2.display();

    return 0;
}
