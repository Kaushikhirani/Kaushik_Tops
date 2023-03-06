#include <stdio.h>

void main()
 {
  int row, col, i, j;
  int matrix1[100][100], matrix2[100][100], result[100][100];

  // Input the size of matrices
  printf("Enter the number of rows and columns of the matrices: ");
  scanf("%d %d", &row, &col);

  // Input the elements of first matrix
  printf("Enter the elements of the first matrix:\n");
  for(i=0; i<row; i++) {
    for(j=0; j<col; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }

  // Input the elements of second matrix
  printf("Enter the elements of the second matrix:\n");
  for(i=0; i<row; i++) {
    for(j=0; j<col; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }

  // Subtract the matrices
  for(i=0; i<row; i++) {
    for(j=0; j<col; j++) {
      result[i][j] = matrix1[i][j] - matrix2[i][j];
    }
  }

  // Display the result matrix
  printf("The result of the subtraction is:\n");
  for(i=0; i<row; i++) {
    for(j=0; j<col; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  
}
