#include <stdio.h>

void main()
 {
  int row, col, i, j;
  int matrix[100][100], max;

  // Input the size of the matrix
  printf("Enter the number of rows and columns of the matrix: ");
  scanf("%d %d", &row, &col);

  // Input the elements of the matrix
  printf("Enter the elements of the matrix:\n");
  for(i=0; i<row; i++) {
    for(j=0; j<col; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Find the maximum number
  max = matrix[0][0];
  for(i=0; i<row; i++) {
    for(j=0; j<col; j++) {
      if(matrix[i][j] > max) {
        max = matrix[i][j];
      }
    }
  }

  // Display the maximum number
  printf("The maximum number in the matrix is: %d\n", max);

 
}
