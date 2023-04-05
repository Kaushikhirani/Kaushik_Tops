#include<iostream>
using namespace std;

class Matrix {
    private:
        int arr[100];
        int size;
    public:
        Matrix() {
            size = 0;
        }
        Matrix(int n) {
            size = n;
            for(int i=0; i<size; i++) {
                arr[i] = 0;
            }
        }
        Matrix operator+(Matrix& mat) {
            Matrix sum(size);
            for(int i=0; i<size; i++) {
                sum.arr[i] = arr[i] + mat.arr[i];
            }
            return sum;
        }
        void read() {
            cout << "Enter the elements of matrix: ";
            for(int i=0; i<size; i++) {
                cin >> arr[i];
            }
        }
        void display() {
            for(int i=0; i<size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    int n;
    cout << "Enter the size of the matrices: ";
    cin >> n;
    Matrix mat1(n), mat2(n);
    cout << "Enter the elements of the first matrix:" << endl;
    mat1.read();
    cout << "Enter the elements of the second matrix:" << endl;
    mat2.read();
    Matrix sum = mat1 + mat2;
    cout << "The sum of the two matrices is:" << endl;
    sum.display();
    return 0;
}
