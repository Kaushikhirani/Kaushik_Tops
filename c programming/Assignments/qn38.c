#include <stdio.h>

void main() 
{
  int row1, col1, row2, col2, i, j, k;
  int matrix1[100][100], matrix2[100][100], result[100][100];

  // Input the size of first matrix
  printf("Enter the number of rows and columns of first matrix: ");
  scanf("%d %d", &row1, &col1);

  // Input the elements of first matrix
  printf("Enter the elements of the first matrix:\n");
  for(i=0; i<row1; i++) {
    for(j=0; j<col1; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }

  // Input the size of second matrix
  printf("Enter the number of rows and columns of second matrix: ");
  scanf("%d %d", &row2, &col2);

  // Input the elements of second matrix
  printf("Enter the elements of the second matrix:\n");
  for(i=0; i<row2; i++) {
    for(j=0; j<col2; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }

  // Check if matrices can be multiplied
  if(col1 != row2) {
    printf("Matrices cannot be multiplied\n");
   
  }

  // Multiply the matrices
  for(i=0; i<row1; i++) {
    for(j=0; j<col2; j++) {
      result[i][j] = 0;
      for(k=0; k<col1; k++) {
        result[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }

  // Display the result matrix
  printf("The result of the multiplication is:\n");
  for(i=0; i<row1; i++) {
    for(j=0; j<col2; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  
}
