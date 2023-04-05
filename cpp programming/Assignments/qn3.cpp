#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int** matrix;

public:
    Matrix(int r, int c) {
        rows = r;
        cols = c;

        matrix = new int*[rows];
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[cols];
        }
    }

    void setMatrix() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Enter element at row " << i + 1 << " column " << j + 1 << ": ";
                cin >> matrix[i][j];
            }
        }
    }

    void displayMatrix() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    Matrix matrix(rows, cols);
    matrix.setMatrix();
    matrix.displayMatrix();

    return 0;
}
