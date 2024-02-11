#include <stdio.h>


void addMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
        }
}


void subtractMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
       }
}


void multiplyMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows1, int cols1, int rows2, int cols2) {
    if (cols1 != rows2)
	 {
     
        return;
    }

    for (int i = 0; i < rows1; i++)
	 {
        for (int j = 0; j < cols2; j++)
		 {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
			 {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
           }
            }   
}


void displayMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
      }
}

int main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the number of rows and columns for second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices should have the same dimensions for addition and subtraction.\n");
        return 0;
    }

    int mat1[100][100], mat2[100][100], result[100][100];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("First matrix:\n");
    displayMatrix(mat1, rows1, cols1);

    printf("Second matrix:\n");
    displayMatrix(mat2, rows2, cols2);

    addMatrices(mat1, mat2, result, rows1, cols1);
    printf("Result of addition:\n");
    displayMatrix(result, rows1, cols1);

    subtractMatrices(mat1, mat2, result, rows1, cols1);
    printf("Result of subtraction:\n");
    displayMatrix(result, rows1, cols1);

    multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);
    printf("Result of multiplication:\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}
