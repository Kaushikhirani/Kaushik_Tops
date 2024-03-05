#include <iostream>

using namespace std;

class SwapNumbers {
private:
    int num1, num2;

public:
    SwapNumbers(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    friend void swap(SwapNumbers &obj);
};

void swap(SwapNumbers &obj) {
    obj.num1 = obj.num1 + obj.num2;
    obj.num2 = obj.num1 - obj.num2;
    obj.num1 = obj.num1 - obj.num2;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    SwapNumbers obj(num1, num2);

    swap(obj);

    cout << "After swapping: " << endl;
    cout << "First number: " << obj.num1 << endl;
    cout << "Second number: " << obj.num2 << endl;

    return 0;
}
#include <iostream>

using namespace std;

class SwapNumbers {
private:
    int num1, num2;

public:
    SwapNumbers(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    friend void swapValues(SwapNumbers &obj);
};

void swapValues(SwapNumbers &obj) {
    obj.num1 = obj.num1 + obj.num2;
    obj.num2 = obj.num1 - obj.num2;
    obj.num1 = obj.num1 - obj.num2;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    SwapNumbers obj(num1, num2);

    swapValues(obj);

    cout << "After swapping: " << endl;
    cout << "First number: " << obj.num1 << endl;
    cout << "Second number: " << obj.num2 << endl;

    return 0;
}
