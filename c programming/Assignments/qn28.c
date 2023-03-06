#include <stdio.h>

void main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    // loop for each row
    for (int i = 1; i <= rows; i++) {
        // loop for printing numbers in each row
        for (int j = 1; j <= i; j++) {
            if (j == i) {
                printf("%d%d ", i, i);
            } else {
                printf("%d ", i);
            }
        }
        // print new line after each row
        printf("\n");
    }
    
   
}