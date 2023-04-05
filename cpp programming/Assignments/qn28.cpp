#include <iostream>
using namespace std;

template <typename T>
void swap_values(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;

    double double1, double2;
    cout << "Enter two doubles: ";
    cin >> double1 >> double2;

    swap_values(int1, int2);
    swap_values(double1, double2);

    cout << "Swapped integers: " << int1 << " " << int2 << endl;
    cout << "Swapped doubles: " << double1 << " " << double2 << endl;

    return 0;
}
