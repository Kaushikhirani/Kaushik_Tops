#include <iostream>

using namespace std;

class MaxNumber {
private:
    int num1, num2;

public:
    MaxNumber(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    friend int findMax(MaxNumber &obj);
};

int findMax(MaxNumber &obj)
 {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main()
 {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    MaxNumber obj(num1, num2);

    int maxNum = findMax(obj);

    cout << "Maximum number: " << maxNum << endl;

    return 0;
}
