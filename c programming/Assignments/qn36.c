#include <stdio.h>

void main() 
{
   int matrix1[3][3], matrix2[3][3], result[3][3];

   // input the values for matrix1
   printf("Enter the values for matrix1 (3x3):\n");
   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         scanf("%d", &matrix1[i][j]);
      }
   }

   // input the values for matrix2
   printf("Enter the values for matrix2 (3x3):\n");
   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         scanf("%d", &matrix2[i][j]);
      }
   }

   // add the matrices
   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         result[i][j] = matrix1[i][j] + matrix2[i][j];
      }
   }

   // print the result
   printf("The sum of the matrices is:\n");
   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         printf("%d ", result[i][j]);
      }
      printf("\n");
   }

   
}
