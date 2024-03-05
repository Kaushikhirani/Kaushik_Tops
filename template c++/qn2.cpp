#include <iostream>

using namespace std;

template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArray[] = {5, 2, 9, 1, 7};
    double doubleArray[] = {5.6, 2.3, 9.1, 1.7, 7.4};
    char charArray[] = {'c', 'd', 'a', 'f', 'b'};

    int intSize = sizeof(intArray) / sizeof(int);
    int doubleSize = sizeof(doubleArray) / sizeof(double);
    int charSize = sizeof(charArray) / sizeof(char);

    cout << "Original integer array: ";
    displayArray(intArray, intSize);
    bubbleSort(intArray, intSize);
    cout << "Sorted integer array: ";
    displayArray(intArray, intSize);

    cout << "\nOriginal double array: ";
    displayArray(doubleArray, doubleSize);
    bubbleSort(doubleArray, doubleSize);
    cout << "Sorted double array: ";
    displayArray(doubleArray, doubleSize);

    cout << "\nOriginal char array: ";
    displayArray(charArray, charSize);
    bubbleSort(charArray, charSize);
    cout << "Sorted char array: ";
    displayArray(charArray, charSize);

    return 0;
}
