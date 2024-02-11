#include <stdio.h>

int main() {
    int n = 10; // The size of the square matrix
    int matrix[n][n];

    // Fill the matrix with values
    int count = 1;
    int row, col;

    for (int layer = 0; layer < (n + 1) / 2; ++layer) {
        // Top side
        for (col = layer; col < n - layer; ++col) {
            matrix[layer][col] = count++;
        }

        // Right side
        for (row = layer + 1; row < n - layer; ++row) {
            matrix[row][n - layer - 1] = count++;
        }

        // Bottom side
        for (col = n - layer - 2; col >= layer; --col) {
            matrix[n - layer - 1][col] = count++;
        }

        // Left side
        for (row = n - layer - 2; row > layer; --row) {
            matrix[row][layer] = count++;
        }
    }

    // Print the matrix
    for (row = 0; row < n; ++row) {
        for (col = 0; col < n; ++col) {
            printf("%3d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
