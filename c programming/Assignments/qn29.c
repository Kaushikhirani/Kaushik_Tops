#include <stdio.h>

void main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    // loop for each row
    for (int i = 1; i <= rows; i++) {
        // loop for printing '*' in each row
        for (int j = 1; j <= i; j--) {
            printf("*");
        }
        // print new line after each row
        printf("\n");
    }
}
    