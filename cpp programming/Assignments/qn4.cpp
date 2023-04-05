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

    Matrix add(Matrix m) {
        if (rows != m.rows || cols != m.cols) {
            cout << "Error: matrices must have the same dimensions." << endl;
            return Matrix(0, 0);
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.matrix[i][j] = matrix[i][j] + m.matrix[i][j];
            }
        }

        return result;
    }
};

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns for the matrices: ";
    cin >> rows >> cols;

    Matrix matrix1(rows, cols);
    cout << "Enter values for first matrix:" << endl;
    matrix1.setMatrix();

    Matrix matrix2(rows, cols);
    cout << "Enter values for second matrix:" << endl;
    matrix2.setMatrix();

    Matrix sum = matrix1.add(matrix2);
    sum.displayMatrix();

    return 0;
}

