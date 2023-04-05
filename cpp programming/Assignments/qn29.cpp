#include <iostream>
using namespace std;

int main() {
    // Allocate memory for an integer using new
    int *p = new int;

    // Initialize the integer and output its value
    *p = 42;
    cout << "The value of p is " << *p << endl;

    // Deallocate the memory using delete
    delete p;

    // Allocate memory for an array of doubles using new
    int size = 5;
    double *q = new double[size];

    // Initialize the array and output its values
    for (int i = 0; i < size; i++) {
        q[i] = i * 0.5;
        cout << "The value of q[" << i << "] is " << q[i] << endl;
    }

    // Deallocate the memory using delete[]
    delete[] q;

    return 0;
}
